
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
int binomial(int k,int n){
    if(k==0||k==n)return 1;
    if(k>n-k)k=n-k;
    int ans=1;
    for(int i=0;i<k;i++){
        ans*=(n-i);
        ans/=(i+1);
    }
    return ans;
}
vector<vector<int>> pascal(int numRows) {
        vector<vector<int>>ans;
        if(!numRows)return ans;
        for(int j=0;j<numRows;j++){
             vector<int>result;
            for(int i=0;i<=j;i++){
                result.push_back(binomial(i,j));
                }
            ans.push_back(result);
        }
       
    return ans;
    }


int main()
{
	//type your code here
	a_m();
	int n;
	cin>>n;
	
	vector<vi>ans=pascal(n);
    int j=n;
    for(auto x:ans){
        j--;
        for(int i=j;i>=0;i--){
            cout<<" ";
        }
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
	
    return 0;
}


 