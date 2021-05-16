#include <bits/stdc++.h>
using namespace std;


// void a_m(){
// 	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// 	#ifndef ONLINE_JUDGE
// 		freopen("input.txt","r",stdin);
// 		freopen("output.txt","w",stdout);
// 	#endif
// }



int main()
{
	// a_m();
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(k==0){
			if(n%2==0){
				cout<<"0"<<endl;
			}else{
				cout<<"1"<<endl;
			}
		}else{
			cout<<lower_bound(0,n,k)<<endl;
		}

	}
	
	
	return 0;

    
}


