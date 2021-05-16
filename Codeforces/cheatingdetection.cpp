#include <bits/stdc++.h>
#include "common/optimization/approximation/table.h"
#include "common/optimization/functions/sigmoid.h"
#include "common/optimization/ternary_search.h"
#include "common/stl/base.h"
#include "common/vector/read.h"
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
#define pqq priority_queue


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

int main_cheating_detection() {
  unsigned T, P = 100, Q = 10000, U, O = 2;
  double b = 3.0, eps = 0.5;

  double l2 = log(2);
  auto lc = [](double x) { return log(2 + exp(x)); };
  opt::approximation::Table<> lst(opt::functions::LogSigmoid, -2 * b, 2 * b,
                                  8 * b / eps);
  opt::approximation::Table<> lct(lc, -2 * b, 2 * b, 8 * b / eps);

  cin >> T >> U;
  for (unsigned it = 0; it < T; ++it) {
    auto vs = ReadVector<string>(P);
    std::vector<double> vp(P, 0.0), vq(Q, 0.0);

    auto FPQ = [&](double lp, double lq, char r) {
      return -lst((r == '1' ? lp - lq : lq - lp));
    };

    auto FPQC = [&](double lp, double lq, char r) {
      return l2 - ((r == '1') ? lct(lq - lp) : 0) + FPQ(lp, lq, r);
    };

    auto FP = [&](unsigned p, double lp) {
      double s = 0;
      for (unsigned q = 0; q < Q; ++q) s += FPQ(lp, vq[q], vs[p][q]);
      return s;
    };

    auto FPC = [&](unsigned p, double lp) {
      double s = 0;
      for (unsigned q = 0; q < Q; ++q) s += FPQC(lp, vq[q], vs[p][q]);
      return s;
    };

    auto FQ = [&](unsigned q, double lq) {
      double s = 0;
      for (unsigned p = 0; p < P; ++p) s += FPQ(vp[p], lq, vs[p][q]);
      return s;
    };

    for (unsigned o = 0; o < O; ++o) {
      for (unsigned p = 0; p < P; ++p) {
        auto fp = [&](double x) { return FP(p, x); };
        vp[p] = opt::TernarySearch(fp, -b, b, eps);
      }
      for (unsigned q = 0; q < Q; ++q) {
        auto fq = [&](double x) { return FQ(q, x); };
        vq[q] = opt::TernarySearch(fq, -b, b, eps);
      }
    }

    double gain = -1000.0;
    unsigned c = 0;
    for (unsigned p = 0; p < P; ++p) {
      auto fpc = [&](double x) { return FPC(p, x); };
      double s = opt::TernarySearch(fpc, -b, b, eps);
      double g = FP(p, vp[p]) - FPC(p, s);
      if (gain < g) {
        gain = g;
        c = p;
      }
    }

    cout << "Case #" << it + 1 << ": " << c + 1 << endl;
  }
  return 0;
}