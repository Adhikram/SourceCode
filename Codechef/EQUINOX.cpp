#pragma GCC optimize "trapv"
#pragma GCC optimize("Ofast")
#pragma GCC optimize("O3", "unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define endl '\n'
#define blaze ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
typedef long long int ll;

int main() {
  blaze;
  string k = "EQUINOX";
  unordered_map<char, bool> map;
  for (ll i = 0; i < k.size(); ++i)
  {
    map[k[i]] = true;
  }
  ll t;
  cin >> t;
  while (t--) {
    ll n, a, b;
    cin >> n >> a >> b;
    ll count = 0;
    while (n--)
    {
      string s1; cin >> s1;
      map[s1[0]]? count+=a:count-=b;
      max({a,b,c});
    //   if (map[s1[0]])
    //   {
    //     count += a;
    //   }
    //   else
    //   {
    //     count -= b;
    //   }
    }
    count? 
    if (count > 0)
      cout << "SARTHAK\n";
    else if (count < 0)
      cout << "ANURADHA\n";
    else
      cout << "DRAW\n";
  }
  return 0;
}
