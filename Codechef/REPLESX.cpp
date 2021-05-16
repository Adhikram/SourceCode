#include <bits/stdc++.h>

using namespace std;
// LIVE AND LET OTHERS LIVE.
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define take(x) cin>>(x);
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
#define ai(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define ao(arr) for(auto wtf:arr) cout<<wtf<<" ";
#define mi(arr,m,n) for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cin>>arr[i][j];}
#define mo(arr,m,n) for(int i=0;i<m;i++){ for(int j=0;j<n;j++) cout<<arr[i][j]<<" "; cout<<endl;}
#define vppo(prs) for(auto x:prs){cout<<x.first<<" "<<x.second<<endl;}
#define For(__,$$,adfdf) for(int __ = $$; __<adfdf;__++)

#define countsetbits(x) __builtin_popcount(x)
#define ll long long int


#define debugger cout<<"I AM EXECUTING"<<endl
#define testcases int asdf; cin>>asdf; while(asdf--)


#define space cout<<endl

#define vi vector<int>
#define si set<int>
#define vc vector<char>
#define sc set<char>
#define vll vector<long long int>
#define vs vector<string>
#define vpp vector<pair<int,int>> 
int findIndex(int a[], int n, int x, int p) {
    int min = 100000000, minp=-1;
    for(int i=0;i<n;i++){
        if(a[i] == x) {
            if(abs(p-i) < min) {
                min = abs(p-i);
                minp = i;
            }
        }
    }
    return minp;
}

void Solve() {
    int N, X, p, k;
    cin >> N >> X >> p >> k;
    int a[N];
    for(int i=0;i<N;i++)
    cin >> a[i];
    sort(a, a+N);
    int index = findIndex(a, N, X, p);
    int count = 0;
    if(a[index] != X) {
        a[k-1] = X;
        sort(a, a+N);
        count++;
    }
    if(a[p-1] == X) {
        cout << 0+count;
        return;
    }
    if(p < k && a[p-1] < X) {
        cout << -1;
        return;
    }
    if(p > k && a[p-1] > X) {
        cout << -1;
        return;
    }
    index = findIndex(a, N, X, p)+1;
    cout << abs(p-index)+count;
}
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        Solve();
        cout << "\n";
    }
return 0;
  
}













