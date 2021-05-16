from time import sleep
from tinydb import TinyDB, Query
from selenium import webdriver
from webdriver_manager.chrome import ChromeDriverManager

# linkedin post liker
#
# Add your post url (if any) to your posts here for others to like them : https://docs.google.com/document/d/1YiPKlYkzGMO08HfpZuOZ-S4B-t6KrA7-Xe1x1ElFmnk/edit?usp=sharing
#
#
#
# To like other people's post:
# step 0 : you need chrome for this. Also install modules :
# pip install selenium && pip install webdriver_manager && pip install tinydb

# step 1 change this from : https://docs.google.com/document/d/1YiPKlYkzGMO08HfpZuOZ-S4B-t6KrA7-Xe1x1ElFmnk/edit?usp=sharing
links = [
    "https://www.linkedin.com/posts/sidd-oo_100daysofcode-devsnestday21-devsnest6monthschallenge-activity-6789459261542973440-x7FX/", "https://www.linkedin.com/posts/ross-nelson-32493684_devsnest6monthschallenge-devsnestday21-slowandsteady-activity-6788661474186338304-Dx0z"
]
#step 2 : run code , check if you are logged in (if not, then login) then press 1 in console
#step 3 : the code shoud take care of the rest add your posts that you would want to get liked

# troubleshooting :
# if error while opening linkedin for first time you can change following case to 2 instead of 1

case = 1

options = webdriver.ChromeOptions()
options.add_argument("user-data-dir=.\data\d1")
if case == 1:
    driver = webdriver.Chrome(ChromeDriverManager().install(), chrome_options=options)
if case == 2:
    driver = webdriver.Chrome(ChromeDriverManager().install())

driver.get("https://linkedin.com")
# delete this after every month
db = TinyDB("./db.json")

while "1" != input("press 1 when signed in: "):
    pass
q = Query()
for link in links:
    try:
        if len(db.search(q.link == link)) == 0:
            print("accessing link ", link)
            driver.get(link)
            sleep(2)
            el = driver.find_element_by_class_name("react-button__trigger")
            if "false" == el.get_attribute("aria-pressed"):
                print("liking")
                el.click()
                print("liked")
                sleep(1)
            db.insert({"link": link})
        else:
            print("already processed link ", link)
    except Exception as e:
        print("error processing link\nlink: ", link, "\nerror",  e)

driver.close()