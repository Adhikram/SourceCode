#include <bits/stdc++.h>

using namespace std;
// LIVE AND LET OTHERS LIVE.
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define take(x) cin>>(x);
#define pb push_back
#define all(c) (c).begin(),(c).end()
// #define reverse(a) reverse(all(a))
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

void solve(){
    int n,x,y,count=0,ans=0;
    string s;
    cin>>x>>y>>s;
    
    int i,j;
    n=s.size();
    for(auto x:s){
        if(x=='?')count++;
    }
    if(count>=n-1){
        cout<<'0';
        return ;
    }
    int k;
    for(k=0;k<n-1;k++)
    {
        if(s[k]!='?')
            break;
    }
    if(k==0)
        k++;
    i=k;
    while(i<n-1)
    {
        if(s[i]=='?')
        {
            if(s[i-1]!=s[i+1] && s[i+1]!='?')
            {
                if(s[i-1]=='J')
                    ans+=y;
                else
                    ans+=x;
            }
            else if(s[i-1]!=s[i+1] && s[i+1]=='?')
            {
                j=i+2;
                while(s[j]=='?' && j<n)
                {
                    j++;
                }
                if(j==n)
                {
                    break;
                }
                if(s[i-1]!=s[j])
                {
                    if(s[i-1]=='J')
                        ans+=y;
                    else
                        ans+=x;
                }
                i=j;
            }
        }
        i++;
    }
    for(i=0;i<n-1;i++)
    {
        if(s[i]=='J' && s[i+1]=='C')
            ans+=y;
        else if(s[i]=='C' && s[i+1]=='J')
            ans+=x;
    }
    cout<<ans;
}
int32_t main()
{
	//type your code here
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int t;
	cin>>t;
	int i=1;
    while(i<=t){
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<endl;
        i++;
        
    }	
    
}