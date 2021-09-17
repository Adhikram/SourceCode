// LIVE AND LET OTHERS LIVE.
#include <bits/stdc++.h>
using namespace std;

#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(0);

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define take(x) \
    ll x;       \
    cin >> (x);
#define p(x) cout << x << endl;
#define p2(x, y) cout << x << " " << y << endl;
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define reverse(a) reverse(all(a))
#define rall(c) (c).rbegin(), (c).rend()
#define ai(arr, n)                       \
    vll arr(n, 0);                       \
    for (int i = 0; i < arr.size(); i++) \
        cin >> arr[i];
#define ao(arr)          \
    for (auto wtf : arr) \
        cout << wtf << " ";
#define mi(arr, m, n)               \
    vector<vll> arr(m, vll(n, 0));  \
    for (int i = 0; i < m; i++)     \
    {                               \
        for (int j = 0; j < n; j++) \
            cin >> arr[i][j];       \
    }
#define mo(arr, m, n)                 \
    for (int i = 0; i < m; i++)       \
    {                                 \
        for (int j = 0; j < n; j++)   \
            cout << arr[i][j] << " "; \
        cout << endl;                 \
    }
#define vppo(prs)                                   \
    for (auto x : prs)                              \
    {                                               \
        cout << x.first << " " << x.second << endl; \
    }
#define For(__, $$, adfdf) for (int __ = $$; __ < adfdf; __++)
#define Fori(__, $$, adfdf) for (int __ = $$; __ > adfdf; __--)

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
bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second > b.second);
}

#define countsetbits(x) __builtin_popcount(x)
#define db double
#define ll long long int
#define ull unsigned ll

#define debugger cout << "I AM EXECUTING" << endl
#define testcases \
    int asdf;     \
    cin >> asdf;  \
    while (asdf--)

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

const ll MOD = 1e9 + 7, M = 2e6 + 7;
string sconvert(ll n)
{
    stringstream ss;
    ss << n;
    string str = ss.str();
    return str;
}
ll lcm(ll x, ll y)
{
    ll res = x / __gcd(x, y);
    return (res * y);
}

void single()
{
    char s[]="";
    cin.getline(s,100);

    char *  pr;
    pr = strtok (s," ");
    string result ="";
    while(pr!=NULL){
        result= pr + result;
        result= ' ' + result; 
        // p(pr);
        pr = strtok (NULL," ");
    }
    cout<<result.substr(1)<<endl;
    

    // cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
}

void multiple()
{
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    testcases { single(); }
}
int main()
{
    IOS;
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif
    // multiple();
    single();
}