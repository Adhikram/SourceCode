#include <bits/stdc++.h>
using namespace std;
#define pb 		push_back
#define mp 		make_pair
#define pii 	pair<int,int>
#define vi 		vector<int>
#define vpii 	vector<pii>
#define SZ(x) 	((int)(x.size()))
#define fi 		first
#define se 		second
#define FOR(i,n)	 for(int (i)=0;(i)<(n);++(i))
#define FORI(i,n) 	for(int (i)=1;(i)<=(n);++(i))
#define IN(x,y) 	((y).find((x))!=(y).end())
#define ALL(t) 		t.begin(),t.end()
#define FOREACH(i,t) for (typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define REP(i,a,b) for(int (i)=(a);(i)<=(b);++i)
#define REPD(i,a,b) for(int (i)=(a); (i)>=(b);--i)
#define REMAX(a,b) (a)=max((a),(b));
#define REMIN(a,b) (a)=min((a),(b));
#define DBG cerr << "debug here" << endl;
#define DBGV(vari) cerr << #vari<< " = "<< (vari) <<endl;
#define ar array
#define all(x) (x).begin(), (x).end()
#define str(s) to_string(s);

typedef long long ll;

const int INF = 1e9;

const int MINV = 1;
const int MAXV = 10;


void a_m(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}
//type the code here


// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to print the array after removing 
// k consecutive elements such that the sum 
// of the remaining elements is maximized 
void maxSumArr(int arr[], int n, int k) 
{ 
	
	int minval =INT_MAX;
	int index=0;
	int sum=0;
	FOR(i,k){
		sum+=arr[i];
	}
	minval=sum;
	REP(i,0,n-k){
		
		
		if(minval<=sum){
			index=i-1;
			
		}
		sum+=(-arr[i]+arr[i+k]);
	}

	// Printing result 
	for (int i = 0; i < index; i++) 
		cout << arr[i] << " "; 
	for (int i = index + k; i < n; i++) 
		cout << arr[i] << " "; 
} 

// Driver code 
int main() 
{ 
	a_m();
	int n;
	cin>>n;
	int arr[20];
	FOR(i,n){
		cin>>arr[i];
	}
	
	int k = 3; 

	maxSumArr(arr, n, k); 

	return 0; 
} 


