#include <bits/stdc++.h>
using namespace std;
void a_m(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}



int main()
{
	//type your code here
	a_m();
	int x,n;
	cin>>n>>x;
	if(x>=1 && x<=1e5 && n>=1 && n<=1e5 ){
		int count=0;
		for(int i=1;i<=n;i++){
			if(x/i<=n && x%i==0){
			    count++;
			}
		}
	
	cout<<count<<endl;
	}
	return 0;

    
}


