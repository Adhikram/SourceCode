
// LIVE AND LET OTHERS LIVE.
#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3", "unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define take(x) cin>>(x);
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define wreverse(a) reverse(all(a))
#define rall(c) (c).rbegin(),(c).rend()
#define ai(arr) for(int i=0;i<arr.size();i++)cin>>arr[i];
#define ao(arr) for(auto wtf:arr) cout<<wtf<<" ";
#define mi(arr,m,n) for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cin>>arr[i][j];}
#define mo(arr,m,n) for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cout<<arr[i][j]<<" "; cout<<endl;}
#define vppo(prs) for(auto x:prs){cout<<x.first<<" "<<x.second<<endl;}
#define For(__,$$,adfdf) for(int __ = $$; __<adfdf;__++)
#define Fori(__,$$,adfdf) for(int __ = $$; __>adfdf;__--)

#define countsetbits(x) __builtin_popcount(x)
#define db double
#define ll long long int
#define ull unsigned ll


#define debugger cout<<"I AM EXECUTING"<<endl
#define testcases int asdf; cin>>asdf; while(asdf--)

#define space cout<<endl

#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vll vector<long long int>
#define vp vector<pair<int,int>> 
#define sc set<char>
#define si set<int>
#define pqq priority_queue
#define up unordered_map


#define MOD (ll)1e9+7
string sconvert(ll n){stringstream ss; ss<<n; string str = ss.str(); return str;}
ll add(ll x, ll y) {ll res = x + y; return (res >= MOD ? res - MOD : res);}
ll mul(ll x, ll y) {ll res = x * y; return (res >= MOD ? res % MOD : res);}
ll sub(ll x, ll y) {ll res = x - y; return (res < 0 ? res + MOD : res);}
ll power(ll x, ll y) {ll res = 1; x %= MOD; while (y) {if (y & 1)res = mul(res, x); y >>= 1; x = mul(x, x);} return res;}
ll mod_inv(ll x) {return power(x, MOD - 2);}
ll lcm(ll x, ll y) { ll res = x / __gcd(x, y); return (res * y);}
void  single(){
  int n;
  cin>>n;
  cout<<n;
  vi arr(n,0);
  ai(arr);
  vector<int>result;
    bool flag=true;
    // int n=arr.size();
    while(n--){
        for(int i=0;i<arr.size()-1;i++){
            if( arr[i]>arr[i+1]){
                flag=false;
                break;
            }
        }
        if(flag){
            
            ao(result);
            return;
        }else{
            flag=true;
            int _max=INT_MIN;
            int imax=0;
            for(int i=0;i<=n;i++){
                if(arr[i]>_max){
                    _max=arr[i];
                    imax=i;
                }
            }
            if(imax==n)continue;
            cout<<imax<<n<<endl;
            for(auto x:arr){
                    cout<<x<<" ";
            }
            cout<<endl;
            reverse(arr.begin(),arr.begin()+imax+1);
            for(auto x:arr){
                    cout<<x<<" ";
            }
            cout<<endl;
            reverse(arr.begin(),arr.begin()+n+1);
            for(auto x:arr){
                    cout<<x<<" ";
            }
            cout<<endl;
            result.push_back(imax+1);
            result.push_back(n+1);
        }
        
    }
    ao(result);
  // cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
}
void multiple(){
  mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
  testcases{single();}
  }
int main()
{
IOS;
#ifndef ONLINE_JUDGE
freopen("../../input.txt","r",stdin);
freopen("../../output.txt","w",stdout);
#endif
// multiple();
single();

}