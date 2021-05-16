#include <bits/stdc++.h>
using namespace std;
int main(){
	int x;
	cin>>x;
	if(x<1 || x>100){
		return 0;

	}
	if(x%2){
		cout<<"NO"<<endl;
	}else{
		if(x<=2)cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}