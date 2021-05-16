#include <bits/stdc++.h>

using namespace std;
// LIVE AND LET OTHERS LIVE.
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define take(x) cin>>(x);
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
#define ai(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define ao(arr) for(auto wtf:arr) cout<<wtf<<" ";
#define mi(arr,m,n) for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cin>>arr[i][j];}
#define mo(arr,m,n) for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cout<<arr[i][j]<<" "; cout<<endl;}
#define vppo(prs) for(auto x:prs){cout<<x.first<<" "<<x.second<<endl;}
#define For(__,$$,adfdf) for(int __ = $$; __<adfdf;__++)

#define countsetbits(x) __builtin_popcount(x)
#define ll long long 


#define debugger cout<<"I AM EXECUTING"<<endl
#define testcases int asdf; cin>>asdf; while(asdf--)


#define space cout<<endl

#define vi vector<int>
#define si set<int>
#define vc vector<char>
#define sc set<char>
#define vll vector<long long int>
#define vs vector<string>
#define vpp vector<pair<int,int>> 


#define MOD (ll)1e9+7
ll int mpow(ll int base,ll  int exp) {
	base %= MOD;
	ll int result = 1ll;
	while (exp > 0) {
	if (exp & 1ll) result = ((ll)result * base) % MOD;
	base = ((ll)base * base) % MOD;
	exp >>= 1;
	}
	return result;
}
string sconvert(ll int n)
{
	stringstream ss;
	ss<<n;
	string str = ss.str();
	return str;
}

template<typename KeyType, typename ValueType>  // for finding max element in the map.
std::pair<KeyType,ValueType> get_max( const std::map<KeyType,ValueType>& x ) {
  using pairtype=std::pair<KeyType,ValueType>; 
  return *std::max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) {
        return p1.second < p2.second;
  }); 
}

ll int add(ll int a, ll int b, ll int mod = MOD) {
    if (a + b >= mod) {
        return a + b - mod;
    }
    return a + b;
}
 
ll int sub(ll int a,ll int b,ll int mod = MOD) {
    if (a - b < 0) {
        return a - b + mod;
    }
    return a - b;
}
 
ll int mul(ll int a, ll int b, ll int mod = MOD) {
    return (ll int)(1ll * a * b % mod);
}
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
}
bitset<30>col,d1,d2;
int r[00];
void nqueen(int row,int n,int &ans){
    if(row==n){
        ans++;
        // cout<<ans<<endl;
        For(i,0,n){
            For(j,0,n){
                if(r[i]==j){
                    cout<<" (1) ";
                }else{
                    cout<<" - ";
                }
                
            }
            cout<<endl;
        }
        space;
        return;
    }
    for(int i=0;i<n;i++){
        //condition
        if(!col[i]&& !d1[i+row] && !d2[i-row+n]){
            col[i]=d1[i+row]=d2[i-row+n]=1;
            r[row]=i;
            nqueen(row+1,n,ans);
            r[row]=0;
            col[i]=d1[i+row]=d2[i-row+n]=0;
        }
    }

}
void  single()
{  
    int t;cin>>t;
    int ans=0;
    nqueen(0,t,ans);
    cout<<ans;
    
}
void multiple()
{
	testcases
    {
		single();
	}
}

int main()
{
  IOS;
  #ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
#endif
//   multiple();
  single();
  
}













