#include<bits/stdc++.h>
using namespace std;
int lcs(char *x,char *y,int n,int m){
	int dp[n+1][m+1]={-1};
	if(m==0||n==0){
		return 0;
		}else{
			if(dp[n][m]!= -1){
				return dp[n][m];
			}
			if(x[n]==y[m]){
				return dp[n][m]=1+lcs(x,y,n-1,m-1);
			}else{
				return dp[n][m]=max(lcs(x,y,n,m-1),lcs(x,y,n-1,m));
			}

		}

}
int main(){
	char x[]="abcdefg",y[]="bcdfg";
	int n=sizeof(x)/sizeof(x[0]);
	int m=sizeof(y)/sizeof(y[0]);
	cout<<lcs(x,y,n-2,m-2)<<endl;

}