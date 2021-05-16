import sys
sys.stdin = open('input.txt')
sys.stdout = open('output.txt','w')

t = int(input())
while(t):
    t-=1
    n,k=map(int,input().split())
    n-=1
    dic={}
    while(n):
        n-=1
        i,j=map(int,input().split())
        if i not in dic:
            dic[i]=1
        else:
            dic[i]+=1
        k+=dic[i]% 1000000007

    print(k)
        
