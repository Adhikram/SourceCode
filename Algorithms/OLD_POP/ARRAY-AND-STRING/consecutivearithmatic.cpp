#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define vii vector<vector<int>>;
#define vpii vector<pii>
#define ar array
#define SZ(x) ((int)(x.size()))
#define fi first
#define se second

#define TRvi(a, it) for (auto(it) = (a).begin(), it != (a).end(); it++)
#define FORV (a, x) for (auto(x) : (a))
#define FOR(i, n) for (int(i) = 0; (i) < (n); ++(i))
#define FORI(i, n) for (int(i) = 1; (i) <= (n); ++(i))
#define REP(i, a, b) for (int(i) = (a); (i) <= (b); ++i)
#define REPD(i, a, b) for (int(i) = (a); (i) >= (b); --i)

#define IN(x, y) ((y).find((x)) != (y).end())
#define ALL(t) t.begin(), t.end()

#define REMAX(a, b) (a) = max((a), (b));
#define REMIN(a, b) (a) = min((a), (b));
#define DBG cerr << "debug here" << endl;
#define DBGV(vari) cerr << #vari << " = " << (vari) << endl;
#define all(x) (x).begin(), (x).end()
#define str(s) to_string(s);

typedef long long ll;

const int INF = 1e9;

const int MINV = 1;
const int MAXV = 10;

// void a_m(){
// 	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// 	#ifndef ONLINE_JUDGE
// 		freopen("input.txt","r",stdin);
// 		freopen("output.txt","w",stdout);
// 	#endif
// }
// type the code here
int lca(vi &r)
{
    ll n = r.size();
    ll diff = (r[0] - r[1]);

    ll count = 2;
    ll maxcount = count;
    for (int i = 1; i < n - 1; i++)
    {
        if ((r[i] - r[i + 1]) != diff)
        {

            diff = (r[i] - r[i + 1]);
            count = 2;
        }
        else
        {
            count++;
            // cout<<endl<<r[i]<<"-"<<r[i+1]<<"count "<<count<<endl;

            maxcount = max(count, maxcount);
        }
    }
    return maxcount;
}

int32_t main()
{
    // type your code here
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    int j = 1;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> r(n);
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }

        cout << "Case #" << j << ": " << lca(r) << endl;
        j++;
    }
    return 0;
}
