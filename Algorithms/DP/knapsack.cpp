#include<bits/stdc++.h>
using namespace std;
int t[1000][1000];
/*void initialization(){
	for(int i;i<1000;i++){
		for(int j;j<1000;j++){
			if (i==0 || j==0){
				t[i][j]==0;
			}
		}
	}
}*/
int knapsack(int v[],int w[],int n,int W){
	if(n==0 || W==0){
		return 0;
	}
	if(w[n-1]>W){
		return knapsack(v,w,n-1,W);
	}else{
				return max(knapsack(v,w,n-1,W),v[n-1]+knapsack(v,w,n-1,W-w[n-1]));

	}
}
int main(){
	int v[]={1,2,5,9},w[]={9,5,4,6},W=11;
	//initialization();
	cout<<knapsack(v,w,4,W)<<endl;

}