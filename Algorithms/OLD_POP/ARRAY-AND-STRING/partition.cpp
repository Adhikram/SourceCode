// https://www.interviewbit.com/problems/partitions/
// You are given a 1D integer array B containing A integers.

// Count the number of ways to split all the elements of the array into 3 contiguous parts so that the sum of elements in each part is the same.

// Such that : sum(B[1],..B[i]) = sum(B[i+1],...B[j]) = sum(B[j+1],...B[n])
// https://www.interviewbit.com/problems/max-sum-contiguous-subarray/
// Input 1:
//     A = [1, 2, 3, 4, -10]

// Output 1:
//     10

// Explanation 1:
//     The subarray [1, 2, 3, 4] has the maximum possible sum of 10.

// Input 2:
//     A = [-2, 1, -3, 4, -1, 2, 1, -5, 4]

// Output 2:
//     6
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

typedef long long ll;

const int INF = 1e9;

const int MINV = INT_MAX;
const int MAXV = INT_MIN;

ll t,i,j,k,l,m,n,o,p,q,temp;
vi r,s,u,v,w,x;


void a_m(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}
//type the code here
int  solve(int A,vector<int> &B) {
int resultCount = 0;
if(A < 3) return resultCount;
unordered_map<int, vector<int>> mp;
vector<int> cummSum(A);
cummSum[0] = B[0];
for(int i = 1; i < A; i++)
{
cummSum[i] = B[i] + cummSum[i-1];
}
int revCummSum = 0;
for(int i = A-1; i > 1; i--)
{
revCummSum += B[i];
if(mp.find(revCummSum) != mp.end()) mp[revCummSum].push_back(i);
else mp[revCummSum] = {i};
}
for(int i = 0; i < A-2; i++)
{
int currSum = cummSum[i];
for(int j = 0; j < mp[currSum].size(); j++)
{
//cout<<currSum<<’ ‘<<cummSum[mp[currSum][j]-1] - currSum<<’\n’;
if(cummSum[mp[currSum][j]-1] - currSum == currSum && mp[currSum][j] > i+1) resultCount++;
}
}

return resultCount;
}




int32_t main()
{
	//type your code here
	a_m();
	cin>>t;
	

    FOR(i,t){
        int temp;
        cin>>temp;
        r.pb(temp);
    }
    cout<<solve(t,r)<<endl;
   

    
}


