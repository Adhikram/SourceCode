
#include <bits/stdc++.h>
using namespace std;
#define pb 		push_back
#define mp 		make_pair
#define pii 	pair<int,int>
#define vi 		vector<int>
#define vii 	vector<vector<int>>;
#define vpii 	vector<pii>
#define ar 		array
#define SZ(x) 	((int)(x.size()))
#define fi 		first
#define se 		second


#define TRvi(a,it)   for(auto (it)=(a).begin(),it!=(a).end();it++) 	
#define FORV (a,x)   for(auto (x):vi(a))
#define FOR(i,n)	 for(int (i)=0;(i)<(n);++(i))
#define FORI(i,n) 	for(int (i)=1;(i)<=(n);++(i))
#define REP(i,a,b) for(int (i)=(a);(i)<=(b);++i)
#define REPD(i,a,b) for(int (i)=(a); (i)>=(b);--i)

#define IN(x,y) 	((y).find((x))!=(y).end())
#define ALL(t) 		t.begin(),t.end()

#define REMAX(a,b) (a)=max((a),(b));
#define REMIN(a,b) (a)=min((a),(b));
#define DBG cerr << "debug here" << endl;
#define DBGV(vari) cerr << #vari<< " = "<< (vari) <<endl;
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
vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()<2)return intervals;
        sort(intervals.begin(),intervals.end());
        vector<int>p=intervals[0];
        vector<vector<int>>ans;
        
        for(auto x:intervals){
            if(p[1]>=x[0]){
                p[1]=max(p[1],x[1]);
            }else{
                ans.push_back(p);
                p=x;
            }
        }
        ans.push_back(p);
        return ans;
        
    }





int32_t main()
{
// 	4
// 1 3
// 2 6
// 8 10
// 15 18
	a_m();
	int n;
	cin>>n;
	vector<vi> r(n,vector<int>(2));
    for(int i=0;i<n;i++){
		cin>>r[i][0]>>r[i][1];
	}
	vector<vi>k=merge(r);
    for(auto x:k){
        cout<<x[0]<<" "<<x[1]<<endl;
    }
	
    return 0;
}

