// LIVE AND LET OTHERS LIVE.

#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define take(x) cin>>(x);
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define reverse(a) reverse(all(a))
#define rall(c) (c).rbegin(),(c).rend()


#define loop(i, start, end) for (int i = start; i <= end; i++)
#define rloop(i, start, end) for (int i = start; i >= end; i--)
#define ai(arr) loop(i, 0, arr.size()) cin >> arr[i];
#define ao(arr)        \
  for (auto wtf : arr) \
    cout << wtf << " ";
#define mi(arr, m, n) \
  loop(i, 0, m) { loop(j, 0, n) cin >> arr[i][j]; }
#define mo(arr, m, n)                       \
  loop(i, 0, m)                             \
  {                                         \
    loop(j, 0, n) cout << arr[i][j] << " "; \
    cout << endl;                           \
  }

#define countsetbits(x) __builtin_popcount(x)
#define db double
#define ll long long int
#define ull unsigned ll


void debugg(){cout<<endl;}
template<class T,class... Args>void debugg(const T& x,const Args&... args){cout<<" |"<<x;debugg(args...);}
#define dbg(...) cout<<__LINE__<<" ["<<#__VA_ARGS__<<"]:",debugg(__VA_ARGS__)

#define debugger cout<<"I AM EXECUTING"<<endl
#define testcases int asdf;  while(scanf("%d",&asdf)!= EOF)

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
ll min(ll x,ll y){return (x > y ? y : x);}
ll max(ll x,ll y){return (x < y ? y : x);}

// vll A,B,C,X,Y;
// ll a,b,c,x,k,n,m,y;
// vector<vll>M,N,K;


void  single()
{
    vi A(9);
    ai(A);
    space;
    ao(A);


// cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
}
void multiple(){
testcases{single();}
}
int main()
{
IOS;
#ifndef ONLINE_JUDGE
    freopen("../input.txt","r",stdin);
    freopen("../output.txt","w",stdout);
#endif
// multiple();
single();

}