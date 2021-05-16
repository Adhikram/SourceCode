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

void  single()
{  
	ll n,m,q;
	cin>>n>>m>>q;
	vector<ll>x(n,0),y(m,0);
	ai(x);
	ai(y);
	sort(all(x));
	sort(all(y));
	while(q--){
		ll z;
		char s;
		cin>>z; 
		cin>>s;
		ll l1,r1,l2,r2;
		ll x1=0,x2=n-1,y1=0,y2=m-1;
		if(s=='A'){
			cin>>l1>>r1;
			x1=lower_bound(x.begin(),x.end(),l1)-x.begin();
			x2=upper_bound(x.begin(),x.end(),r1)-x.begin()-1;
			// cout<<"x2 "<<x2<<endl;
		}else if(s=='B'){
			cin>>l2>>r2;
			y1=lower_bound(y.begin(),y.end(),l2)-y.begin();
			y2=upper_bound(y.begin(),y.end(),r2)-y.begin()-1;
			// cout<<"y2 "<<y2<<endl;
		}else{
			cin>>l1>>r1>>l2>>r2;
			x1=lower_bound(x.begin(),x.end(),l1)-x.begin();
			x2=upper_bound(x.begin(),x.end(),r1)-x.begin()-1;
			y1=lower_bound(y.begin(),y.end(),l2)-y.begin();
			y2=upper_bound(y.begin(),y.end(),r2)-y.begin()-1;

		}
		ll count=0;
		ll j=y2;
		// cout<<x1<<x2<<y1<<y2<<endl;
		for(int i=x1;i<=x2;i++){
			
			while(j>=y1 && z<(x[i]+y[j])){
				j--;
			}
			// cout<<"j"<<j<<endl;
			if(j>=y1 && z>=(x[i]+y[j]))count+=j-y1+1;
		}
		cout<<count<<endl;

	}


        
        

    //cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
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
// multiple();
  single();

}



