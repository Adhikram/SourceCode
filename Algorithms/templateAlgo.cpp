// LIVE AND LET OTHERS LIVE.
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std::chrono;
using namespace std;


#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define take(x) cin >> (x);
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define reverse(a) reverse(all(a))
#define rall(c) (c).rbegin(), (c).rend()

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

#define debugger cout << "I AM EXECUTING" << endl


#define space cout << endl

#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vll vector<long long int>
#define vp vector<pair<int, int>>
#define sc set<char>
#define si set<int>
#define pqq priority_queue
#define up unordered_map
void debugg()
{
  cout << endl;
}
template <class T, class... Args>
void debugg(const T &x, const Args &...args)
{
  cout << " |" << x;
  debugg(args...);
}
#define dbg(...) cout << __LINE__ << " [" << #__VA_ARGS__ << "]:", debugg(__VA_ARGS__)

#define MOD 1000000007
string sconvert(ll n)
{
  stringstream ss;
  ss << n;
  string str = ss.str();
  return str;
}
ll add(ll x, ll y)
{
  ll res = x + y;
  return (res >= MOD ? res - MOD : res);
}
ll mul(ll x, ll y)
{
  ll res = x * y;
  return (res >= MOD ? res % MOD : res);
}
ll sub(ll x, ll y)
{
  ll res = x - y;
  return (res < 0 ? res + MOD : res);
}
ll power(ll x, ll y)
{
  ll res = 1;
  x %= MOD;
  while (y)
  {
    if (y & 1)
      res = mul(res, x);
    y >>= 1;
    x = mul(x, x);
  }
  return res;
}
ll mod_inv(ll x) { return power(x, MOD - 2); }
ll lcm(ll x, ll y)
{
  ll res = x / __gcd(x, y);
  return (res * y);
}

void solve()
{


}

int32_t main()
{
  auto start = chrono::high_resolution_clock::now();
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  ios_base::sync_with_stdio(false);
  cout.tie(NULL);
  cin.tie(NULL);
  int t = 1;
  // cin>>t;
  while (t--)
  {
    solve();
  }
#ifndef ONLINE_JUDGE
  auto stop = chrono::high_resolution_clock::now();
  auto duration = chrono::duration_cast<microseconds>(stop - start);
  cout << "\n\nExecuted In: " << duration.count() << " ms";
#endif
  return 0;
}