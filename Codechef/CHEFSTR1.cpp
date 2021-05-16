
#include<bits/stdc++.h>
using namespace std;
int countskips(vector<int>s){
	int skips=0;
	int pre=s[0];
	for(int i=1;i<s.size();i++){
		skips+=abs(s[i]-pre-1);
		pre=s[i];
	}
	return skips;
}
void a_m(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}
 int main(){
 	a_m();
 	int t;
 	while(t--){
 		int n;
 		cin>>n;
 		vector<int> string{};
 		for(int i=0;i<n;i++){
 			int temp;
 			cin>>temp;
 			string.push_back(temp);
 		}
 		cout<< countskips(string)<<endl;
 	}
 	
 }

