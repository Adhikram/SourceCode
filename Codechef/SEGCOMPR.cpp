#include <bits/stdc++.h>

using namespace std;
// LIVE AND LET OTHERS LIVE.
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define take(x) cin>>(x);
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define reverse(a) reverse(all(a))
#define rall(c) (c).rbegin(),(c).rend()
#define ai(arr) for(int i=0;i<arr.size();i++)cin>>arr[i];
#define ao(arr) for(auto wtf:arr) cout<<wtf<<" ";
#define mi(arr,m,n) for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cin>>arr[i][j];}
#define mo(arr,m,n) for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cout<<arr[i][j]<<" "; cout<<endl;}
#define vppo(prs) for(auto x:prs){cout<<x.first<<" "<<x.second<<endl;}
#define For(__,$$,adfdf) for(int __ = $$; __<adfdf;__++)
#define Fori(__,$$,adfdf) for(int __ = $$; __>adfdf;__--)

#define countsetbits(x) __builtin_popcount(x)
#define ll long long int
#define ull unsigned ll


#define debugger cout<<"I AM EXECUTING"<<endl
#define testcases int asdf; cin>>asdf; while(asdf--)


#define space cout<<endl

#define vi vector<int>
#define si set<int>
#define vc vector<char>
#define vb vector<bool>
#define sc set<char>
#define vll vector<long long int>
#define vs vector<string>
#define vpp vector<pair<int,int>> 


#define MOD (ll)1e9+7
ll mpow(ll base,ll exp) {
	base %= MOD;
	ll result = 1ll;
	while (exp > 0) {
	if (exp & 1ll) result = ((ll)result * base) % MOD;
	base = ((ll)base * base) % MOD;
	exp >>= 1;
	}
	return result;
}
string sconvert(ll n)
{
	stringstream ss;
	ss<<n;
	string str = ss.str();
	return str;
}

ll add(ll a, ll b, ll mod = MOD) {
    if (a + b >= mod) {
        return a + b - mod;
    }
    return a + b;
}
 
ll sub(ll a,ll b,ll  mod = MOD) {
    if (a - b < 0) {
        return a - b + mod;
    }
    return a - b;
}
 
ll mul(ll a, ll  b, ll mod = MOD) {
    return (ll )(1ll * a * b % mod);
}


bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second > b.second); 
}
int FUNC(int num)
{
    if (!num)
        return 0;
    int ret = 1;
    while (num >>= 1)
        ret <<= 1;
    return ret;
}

void  single()
{  
    ll n;
        take(n);
        vi v(n);
        ai(v);
        ll res = 0;

        while (v.size() > 1)
        {
            if (v[0] != v[1])
            {
                res = FUNC(v[0]) + FUNC(v[1]);
                v.erase(v.begin(), v.begin() + 2);
                v.push_back(res);
            }
            else
            {
                v.erase(v.begin(), v.begin() + 2);
                v.push_back(0);
            }
        }
        cout<< (v[0] * n) << endl;
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
// 10  
// 0 1 2 3 4 5 6 7 8 9












