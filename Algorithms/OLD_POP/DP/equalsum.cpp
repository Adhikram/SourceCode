#include<bits/stdc++.h>
using namespace std;
bool equalsum(vector<int>& w){
	const int maxarray=100,maxsum=200;
	int sum=0;
	bitset<maxarray*maxsum/2+1>bits(1);

	for(auto n:w){
		sum+=n;
		bits|=bits << n;


	}
	return !(sum%2)&& bits[sum/2];

}
int main(){
	vector<int> w={1,2,3,4,5,6,7};
	if (equalsum(w) )
	     printf("Found a subset with given sum"); 
	  else
	     printf("No subset with given sum"); 
	  return 0; 

}