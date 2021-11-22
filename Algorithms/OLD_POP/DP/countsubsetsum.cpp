#include<bits/stdc++.h>
using namespace std;
int t[100][100]={0};
void printdp(int n,int k){
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= k; ++j)
		{
			cout<<t[i][j]<<" ";
		}
		cout<<endl;
	}
}
int countsubsetsum(vector<int>& w,int k){
	int n=w.size();
	for (int i = 0; i <= n; ++i)
	{
		t[i][0]=1;
	}
	printdp(n,k);
	for (int i = 1; i <=n; ++i)
	{
		for (int j = 1; j<=k; ++j)
		{
			if(w[i-1]>j){
				t[i][j]= t[i-1][j];
			}else{
				t[i][j]= t[i-1][j] + t[i-1][j-w[i-1]];

			}
		}
	}
	return t[n][k];

}
int main(){
	vector<int> w={4,3,2,3,5};
	int k=5;
	cout<<countsubsetsum(w,k)<<endl;
	printdp(5,k);

}