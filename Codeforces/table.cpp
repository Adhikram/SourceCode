#include <bits/stdc++.h>
using namespace std;

int main()
{
	//type your code here
	int x,n;
	cout<<"ENter the number"<<endl;
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


