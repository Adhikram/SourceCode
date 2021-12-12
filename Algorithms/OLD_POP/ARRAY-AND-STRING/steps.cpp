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
#define FORV (a,x)   for(auto (x):(a))
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

int step(vi &r){
    long long int maxv=r[0];
    long long int  count=0;
    for(long unsigned int  i=1;i<r.size();i++ )
    {
        if(maxv>r[i]){
            count+=(maxv-r[i]);
        }else{
            maxv=r[i];
        }
    }
    return count;
}




int32_t main()
{
	//type your code here
	a_m();
	ll T;
	cin>>T;
	vector<int> r(T);
    for(ll i=0;i<T;i++){
        cin>>r[i];
    }
    cout<<step(r)<<endl;
    
}
