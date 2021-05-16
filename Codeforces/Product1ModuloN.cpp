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
vector<int>prime={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997, 1009, 1013, 1019, 1021, 1031, 1033, 1039, 1049, 1051, 1061, 1063, 1069, 1087, 1091, 1093, 1097, 1103, 1109, 1117, 1123, 1129, 1151, 1153, 1163, 1171, 1181, 1187, 1193, 1201, 1213, 1217, 1223, 1229, 1231, 1237, 1249, 1259, 1277, 1279, 1283, 1289, 1291, 1297, 1301, 1303, 1307, 1319, 1321, 1327, 1361, 1367, 1373, 1381, 1399, 1409, 1423, 1427, 1429, 1433, 1439, 1447, 1451, 1453, 1459, 1471, 1481, 1483, 1487, 1489, 1493, 1499, 1511, 1523, 1531, 1543, 1549, 1553, 1559, 1567, 1571, 1579, 1583, 1597, 1601, 1607, 1609, 1613, 1619, 1621, 1627, 1637, 1657, 1663, 1667, 1669, 1693, 1697, 1699, 1709, 1721, 1723, 1733, 1741, 1747, 1753, 1759, 1777, 1783, 1787, 1789, 1801, 1811, 1823, 1831, 1847, 1861, 1867, 1871, 1873, 1877, 1879, 1889, 1901, 1907, 1913, 1931, 1933, 1949, 1951, 1973, 1979, 1987, 1993, 1997, 1999};
bool ok[1000001];
void  single()

{  
        // int n;take(n);
        // int temp=1;
        // vi result;
        // if(n==2){
        //     cout<<"1 \n 1"<<endl;
        // }else{
        //     For(i,1,n){
        //         if(__gcd(n,i)==1){
        //             temp*=i;
        //             result.pb(i);
        //         }  
        //     }
        //     if((temp%n)==n-1){
        //             result.pop_back();
        //         }
        //     cout<<result.size()<<endl;

        //     ao(result);
        //     space;
        // }
        int n;
        take(n);
        long long prod=1;
        for (int i=1;i<n;i++)
        {
            if (__gcd(n,i)==1)
            {
                ok[i]=1;
                prod=(prod*i)%n;
            }
        }

        // ao(ok);
        space;
        cout<<prod<<endl;
        if (prod!=1)
        ok[prod]=0;
        printf("%d\n",count(ok+1,ok+n,1));
        for (int i=1;i<n;i++)
        {
            if (ok[i])
            printf("%d ",i);
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