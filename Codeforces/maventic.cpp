#include <bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
freopen("../input.txt","r",stdin);
freopen("../output.txt","w",stdout);
freopen("../error.txt","w",stderr);
#endif
    string s;
    cin>>s;
    if (s.size()<3){
        cout<<""<<endl;
    }else{
        string temp ="";
        string result ="";
        for(int i =0;i<s.size()-2;i++){
            temp= s.substr(i,3);
            if(stoi(temp)%2==1){
                result = max(result , temp);
            }
            
        }
        cout<<result<<endl;
    }



}