// https://www.interviewbit.com/problems/add-one-to-number/
// If the vector has [1, 2, 3]

// the returned vector should be [1, 2, 4]

// as 123 + 1 = 124.
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
vi plusOne(vector<int> &A) {
    int sum=0;
      int carry=1;
      int i=A.size()-1;
      
      while(carry){
          if(i== -1){
              A.insert(A.begin(),1);
              break;
          }
          sum=carry+A[i];
          A[i]=(sum>9)?0:sum;
          carry=(sum>9)?1:0;
          i--;
      }
      while(A[0]==0){
          A.erase(A.begin());
      }
      return A;

}




int32_t main()
{
	//type your code here
	a_m();
	cin>>t;
	

    FOR(i,t){
        cin>>temp;
        r.pb(temp);

    }
    u=plusOne(r);
    for(auto x:u){
        cout<<x<<endl;
    }

    
}


