// LIVE AND LET OTHERS LIVE.
#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define take(x) ll x;cin>>(x);
#define p(x) cout<<x<<endl;
#define p2(x,y) cout<<x<<" "<<y<<endl;
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define reverse(a) reverse(all(a))
#define rall(c) (c).rbegin(),(c).rend()
#define ai(arr,n) vll arr(n,0); for(int i=0;i<arr.size();i++)cin>>arr[i];
#define ao(arr) for(auto wtf:arr) cout<<wtf<<" ";
#define mi(arr,m,n) vector<vll>arr(m,vll(n,0)); for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cin>>arr[i][j];}
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

const int MAX = 10000000;

int prefix[MAX + 1];
 
void buildPrefix()for(int i=1;i<row-1;i++){
            for(int j = 1; j<col-1; j++){
                if(dp[i][j]){
                    dp[i][j]=1+ max({dp[i-1][j],dp[i+1][j],dp[i][j-1],dp[i][j+1] });
                    _max = max(_max,dp[i][j]);
                }
            }
        }
{
    bool prime[MAX + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= MAX; p++) {
 
        if (prime[p] == true) {
 
            for (int i = p * 2; i <= MAX; i += p)
                prime[i] = false;
        }
    }
 
    prefix[0] = prefix[1] = 0;
    for (int p = 2; p <= MAX; p++) {
        prefix[p] = prefix[p - 1];
        if (prime[p])
            prefix[p]++;
    }
}
 int query(int L, int R)
{
    return prefix[R] - prefix[L];
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  buildPrefix();
  while (t--) {
      int n;
      cin>>n;
      if(n==2)cout<<"1\n";
      else if(n==3||n==4)cout<<"2\n";
      else{
          int l = n / 2;
          int ans = query(l,n);
          cout<<ans+1<<"\n";
      }

  }
  return 0;
}