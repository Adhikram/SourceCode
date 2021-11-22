#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000]={0};
void printdp(int n,int W){
	for (int i = 0; i <=n; ++i)
	{
		for (int j = 0; j <= W; ++j)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<""<<endl;
	}
}
int knapsack(int v[],int w[],int n,int W){
	for (int i = 0; i <= n;i++)
	{
		for (int j = 0; j <= W; j++)
		{
			if(i==0||j==0){
				dp[i][j]=0;
			}else {if(w[i-1]<=j){
				dp[i][j]=max(dp[i-1][j]  ,v[i-1] + dp[i-1][j-w[i-1]]);
				}else{
				 dp[i][j]=dp[i-1][j];

				}
		}
	}
	}
	return dp[n][W-1];
 
	
}

int main(){
	int v[]={1,2,5,9},w[]={9,5,4,6},W=11;
	int n= sizeof(v)/sizeof(v[0]);
	cout<<knapsack(v,w,n,W)<<endl;

}