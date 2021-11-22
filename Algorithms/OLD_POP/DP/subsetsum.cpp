#include<bits/stdc++.h>
using namespace std;
bool equalsum(vector<int>& w,int W){
	const int maxarray=100,maxsum=200;
	int sum=0;
	bitset<maxarray*maxsum/2+1>bits(1);

	for(auto n:w){
		sum+=n;
		bits|=bits << n;
		printbitset(bits,sum);
	}
	return bits[W];

}
int main(){
	vector<int> w={1,2,3,4,5,6,7};
	int W=10;
	if (equalsum(w,W) )
	     printf("Found a subset with given sum"); 
	  else
	     printf("No subset with given sum"); 
	  return 0; 

}