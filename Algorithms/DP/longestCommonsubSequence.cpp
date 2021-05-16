#include<bits/stdc++.h>
using namespace std;
int lcs(char *x,char *y,int n,int m){
	if(m==0||n==0){
		return 0;
		}else{
			if(x[n-1]==y[m-1]){
				return 1+lcs(x,y,n-1,m-1);
			}else{
				return max(lcs(x,y,n,m-1),lcs(x,y,n-1,m));
			}

		}

}
int main(){
	char x[]="abcdefg",y[]="bcdfg";
	int n=sizeof(x)/sizeof(x[0]);
	int m=sizeof(y)/sizeof(y[0]);
	cout<<lcs(x,y,n-1,m-1)<<endl;

}