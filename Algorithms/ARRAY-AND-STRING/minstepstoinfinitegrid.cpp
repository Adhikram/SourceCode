// https://www.interviewbit.com/problems/min-steps-in-infinite-grid/
// Given two integer arrays A and B, where A[i] is x coordinate and B[i] is y coordinate of ith point respectively.



// Output Format
// Return an Integer, i.e minimum number of steps.
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
#define str(s) to_string(s);


typedef long long ll;

const int INF = 1e9;

const int MINV = 1;
const int MAXV = 10;

ll t,i,j,k,l,m,n,o,p,q;
vi r,s,u,v,w,x;



void a_m(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}
//type the code here
int coverPoints(vi r,vi s){
     int sum=0;
    for(int i=1;i<r.size();i++)
    sum+=max(abs(r[i]-r[i-1]),abs(s[i]-s[i-1]));
    return sum;
}





int32_t main()
{
	//type your code here
	a_m();

	cin>>t;
    FOR(i,t){
        cin>>j;
        r.push_back(j);

    }
    FOR(i,t){
        cin>>j;
        s.push_back(j);
        
    }
    cout<<coverPoints(r,s)<<endl;
}

