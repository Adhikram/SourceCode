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
int  maxSubArray(vector<int> &A) {
    int sum=0;
    int globalMaxSum=A[0];
    for(auto x:A){
        sum+=x;
        // cout<<sum<<" "<<globalMaxSum<<endl;
        globalMaxSum=max(globalMaxSum,sum);
        sum=max(sum,0);
    }
    return globalMaxSum;
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
    cout<<maxSubArray(r)<<endl;
   

    
}


