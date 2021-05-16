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
int i,j,k,l,temp,n,t;
vi a,b,c,d;
// input: rabbbit
// rabbit

void a_m(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}
//type the code here




int dss(string s,string t){
    
    
    int n= s.length();
    int m=t.length();
    vector<vector<int>> dp(m+1,vector<int>(n+1,0));
    for(int i=0;i<=n;i++){
        dp[0][i]=1;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(t[i-1]==s[j-1]){
                // if both are same then we will look for solution sumation of (rabbbi and rabbit) and (rabbbi and rabbi)  
                 dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
                
            }else{
                // if not then we will search for the rabbit and rabbbi
               dp[i][j]=dp[i][j-1];
            }
        }
    }
    // for(auto x:dp){
    //     for(auto y:x){
    //         cout<<y<<" ";
    //     }int Solution::hammingDistance(const vector<int> &A) {
    long long int ans=0,n=A.size();
    long long int count;
    for(int i=0;i<31;i++){
        count=0;
    for(int j=0;j<n;j++){
        if(A[j]&(1<<i))
        count++;
    }
    ans=(ans+count*(n-count)*2)%1000000007;
    }
    return ans;
}
    //     cout<<endl;
    // }
    return dp[m][n];
    
    

}

int32_t main()
{
	//type your code here
	a_m();
	
    string a,b;
    cin>>a;
    cin>>b;
    
    cout<<"ans="<<dss(a,b)<<endl;
}

