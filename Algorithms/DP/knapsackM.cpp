#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000]={0};
int knapsack(int v[],int w[],int n,int W){
	if(n==0 || W==0){
		return 0;
	}
	if(dp[n][W]!=0){
		return dp[n][W];
	}
	if(w[n]>W){
		
		return dp[n][W]=knapsack(v,w,n-1,W);
	}else{
				return dp[n][W]=max(knapsack(v,w,n-1,W),v[n]+knapsack(v,w,n-1,W-w[n]));

	}
}
int main(){
	int v[]={1,2,5,9},w[]={9,5,4,6},W=11;
	int n= sizeof(v)/sizeof(v[0]);
	cout<<knapsack(v,w,n-1,W)<<endl;

}