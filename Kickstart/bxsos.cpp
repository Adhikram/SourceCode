#include <bits/stdc++.h>

using namespace std;
// LIVE AND LET OTHERS LIVE.
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
#define mi(arr,m,n) vector<vector<char>>arr(m,vector<char>(n,0)); for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cin>>arr[i][j];}
#define mo(arr,m,n) for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cout<<arr[i][j]<<" "; cout<<endl;}
#define vppo(prs) for(auto x:prs){cout<<x.first<<" "<<x.second<<endl;}
#define For(__,$$,adfdf) for(int __ = $$; __<adfdf;__++)
#define Fori(__,$$,adfdf) for(int __ = $$; __>adfdf;__--)


void debugg(){cout<<endl;}
template<class T,class... Args>void debugg(const T& x,const Args&... args){cout<<" |"<<x;debugg(args...);}
#define dbg(...) cout<<__LINE__<<" ["<<#__VA_ARGS__<<"]:",debugg(__VA_ARGS__)

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
ll min(ll x, ll y)
{
    if (x > y)
        return y;
    return x;
}

const ll MOD = 1e9+7, M = 2e6+7;
string sconvert(ll n){stringstream ss; ss<<n; string str = ss.str(); return str;}
ll lcm(ll x, ll y) { ll res = x / __gcd(x, y); return (res * y);}
 

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){ return (a.second > b.second); } 

int32_t main()
{
    //type your code here
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("../input.txt","r",stdin);
        freopen("../output.txt","w",stdout);
        freopen("../error.txt","w",stderr);
    #endif
    int t;
    cin>>t;
    int i=1;
    while(i<=t){
        take(n);
        mi(arr,n,n);
        unordered_map<int,int>hash;
        ll result =INT_MAX;
        For(j,0,n){
            bool taken = false;
            ll count =0;
            For(k,0,n){
                if(arr[j][k] =='O'){
                    taken=true;
                    break;
                }
                if(arr[j][k] =='.'){
                    count++;
                }
            }
            p2(count,hash[count]);
            if(!taken&& count)if(!taken && count){
                hash[count]++;
                result = min(result,count);

            }

        }
        For(j,0,n){
            bool taken = false;
            ll count =0;
            For(k,0,n){
                if(arr[k][j] =='O'){
                    taken=true;
                    break;
                }
                if(arr[k][j] =='.'){
                    count++;
                }
            }
            p2(count,hash[count]);
            if(!taken && count){
                hash[count]++;
                result = min(result,count);

            }

        }

        cout << "Case #" << i << ": ";
        if (result == INT_MAX)
            cout << "Impossible" << endl;
        else
            cout << result <<" "<<hash[result] << endl;
        
        i++;
        
    }	
    
}