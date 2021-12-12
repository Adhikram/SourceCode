#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("/mnt/c/Projects/SourceCode/input.txt","r",stdin);
    freopen("/mnt/c/Projects/SourceCode/output.txt","w",stdout);
#endif
    // int t ;
    // while(scanf("%d",&t)!= EOF){
    //     cout<<t<<endl;
    // }
    int prev =INT_MAX,now;
    int count=0;
    while(cin>>now){
        if(now>prev)count++;
        prev=now;
    }
    cout<<count<<endl;
    return 0;
}