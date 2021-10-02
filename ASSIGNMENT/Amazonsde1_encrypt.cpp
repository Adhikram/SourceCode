#include <bits/stdc++.h>
using namespace std;

vector<int> simple(string s){
    vector<int>v(26,0);
    
    int n =s.size();
    int i=n-1;
    int freq=1;
    while(i>=0){
        cout<<s[i]<<endl;
        if(s[i]=='#'){
            string temp = s.substr(i-2,2);
            v[stoi(temp)-1]+=freq;
            cout<<temp<<endl;
            freq=1;
            i-=3;

        }else if(s[i]==')'){
            i--;
            string count ="";
            while(s[i]!='('){
                count=s[i]+count;
                i--;
            }
            i--;
            freq=stoi(count);
        }else{
            v[s[i]-'0'-1]+=freq;
            freq=1;
            i--;
        }
        
    }
    return v;
    
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
    freopen("../error.txt", "w", stderr);
#endif
    string t;
    cin >> t;

    for(auto x:simple(t)) {
        cout<<x<<" ";
    }
    return 0;
}