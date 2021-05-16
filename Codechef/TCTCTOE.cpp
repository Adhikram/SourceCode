
/// LIVE AND LET OTHERS LIVE.
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


#define MOD 1000000007
string sconvert(ll n){stringstream ss; ss<<n; string str = ss.str(); return str;}
ll add(ll x, ll y) {ll res = x + y; return (res >= MOD ? res - MOD : res);}
ll mul(ll x, ll y) {ll res = x * y; return (res >= MOD ? res % MOD : res);}
ll sub(ll x, ll y) {ll res = x - y; return (res < 0 ? res + MOD : res);}
ll power(ll x, ll y) {ll res = 1; x %= MOD; while (y) {if (y & 1)res = mul(res, x); y >>= 1; x = mul(x, x);} return res;}
ll mod_inv(ll x) {return power(x, MOD - 2);}
ll lcm(ll x, ll y) { ll res = x / __gcd(x, y); return (res * y);}

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        ll cx = 0, co = 0, c_ = 0;
        char mat[3][3] = {0};
        For(i,0, 3)
        {
            For(j,0, 3)
            {
                cin >> mat[i][j];
                if (mat[i][j] == 'X')
                    cx++;
                if (mat[i][j] == '_')
                    c_++;
                if (mat[i][j] == 'O')
                    co++;
            }
        }
        int resx = 0, res0 = 0;

        if (mat[0][0] == 'X' and mat[1][0] == 'X' and mat[2][0] == 'X')
            resx = 1;
        if (mat[0][1] == 'X' and mat[1][1] == 'X' and mat[2][1] == 'X')
            resx = 1;
        if (mat[0][2] == 'X' and mat[1][2] == 'X' and mat[2][2] == 'X')
            resx = 1;
        if (mat[0][0] == 'X' and mat[1][1] == 'X' and mat[2][2] == 'X')
            resx = 1;
        if (mat[0][0] == 'X' and mat[0][1] == 'X' and mat[0][2] == 'X')
            resx = 1;
        if (mat[1][0] == 'X' and mat[1][1] == 'X' and mat[1][2] == 'X')
            resx = 1;
        if (mat[2][0] == 'X' and mat[2][1] == 'X' and mat[2][2] == 'X')
            resx = 1;
        if (mat[0][2] == 'X' and mat[1][1] == 'X' and mat[2][0] == 'X')
            resx = 1;

        if (mat[0][0] == 'O' and mat[1][0] == 'O' and mat[2][0] == 'O')
            res0 = 1;
        if (mat[0][1] == 'O' and mat[1][1] == 'O' and mat[2][1] == 'O')
            res0 = 1;
        if (mat[0][2] == 'O' and mat[1][2] == 'O' and mat[2][2] == 'O')
            res0 = 1;
        if (mat[0][0] == 'O' and mat[1][1] == 'O' and mat[2][2] == 'O')
            res0 = 1;
        if (mat[0][0] == 'O' and mat[0][1] == 'O' and mat[0][2] == 'O')
            res0 = 1;
        if (mat[1][0] == 'O' and mat[1][1] == 'O' and mat[1][2] == 'O')
            res0 = 1;
        if (mat[2][0] == 'O' and mat[2][1] == 'O' and mat[2][2] == 'O')
            res0 = 1;
        if (mat[0][2] == 'O' and mat[1][1] == 'O' and mat[2][0] == 'O')
            res0 = 1;

        if ((resx == 1 and res0 == 1) or ((cx - co) < 0) or (cx - co) > 1)
            cout << 3 << "\n";
        else if (cx == 0 and co == 0 and c_ == 9)
            cout << 2 << "\n";
        else if (resx == 1 and res0 == 0 and cx > co)
            cout << 1 << "\n";
        else if (resx == 0 and res0 == 1 and cx == co)
            cout << 1 << "\n";
        else if (resx == 0 and res0 == 0 and c_ == 0)
            cout << 1 << "\n";
        else if (resx == 0 and res0 == 0 and c_ >= 0)
            cout << 2 << "\n";
        else
            cout << 3 << "\n";
    }
    return 0;
}