#include<bits/stdc++.h>
using namespace std;
int lcs(char *x,char *y,int n,int m){
	int dp[n+1][m+1];
	for (int i = 0; i <=n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			if(i==0 ||j==0){
				dp[i][j]=0;
			}else{
				if(x[i-1]==y[j-1]){
				 dp[i][j]=1+dp[i-1][j-1];
			}else{
				 dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
			}
		}
	}
	return dp[n][m];

}
int main(){
	char x[]="abcdefg",y[]="abcdfg";
	int n=sizeof(x)/sizeof(x[0]);
	int m=sizeof(y)/sizeof(y[0]);
	cout<<lcs(x,y,n-1,m-1)<<endl;

}