#include <bits/stdc++.h>
using namespace std;
#define pb 		push_back
#define mp 		make_pair
#define pii 	pair<int,int>
#define vi 		vector<int>
#define vpii 	vector<pii>
#define SZ(x) 	((int)(x.size()))
#define fi 		first
#define se 		second
#define FOR(i,n)	 for(int (i)=0;(i)<(n);++(i))
#define FORI(i,n) 	for(int (i)=1;(i)<=(n);++(i))
#define IN(x,y) 	((y).find((x))!=(y).end())
#define ALL(t) 		t.begin(),t.end()
#define FOREACH(i,t) for (typeof(t.begin()) i=t.begin(); i!=t.end(); i++)
#define REP(i,a,b) for(int (i)=(a);(i)<=(b);++i)
#define REPD(i,a,b) for(int (i)=(a); (i)>=(b);--i)
#define REMAX(a,b) (a)=max((a),(b));
#define REMIN(a,b) (a)=min((a),(b));
#define DBG cerr << "debug here" << endl;
#define DBGV(vari) cerr << #vari<< " = "<< (vari) <<endl;
#define ar array
#define all(x) (x).begin(), (x).end()
#define str(s) to_string(s);

typedef long long ll;

const int INF = 1e9;

const int MINV = 1;
const int MAXV = 10;
int i,j,k,l,temp,n,t;

// input: rabbbit
// rabbit

void a_m(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}
//type the code here




int mah( const vector<int> &heights) {
     int n = heights.size();
        stack <pair<int, int>> s_nsl, s_nsr;
        s_nsl.push({INT_MIN, -1}); s_nsr.push({INT_MIN, n});
        vector <int> nsl(n), nsr(n);
        
        for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
            while (!s_nsl.empty() && s_nsl.top().first >= heights[i])
                s_nsl.pop();
            nsl[i] = abs(i - s_nsl.top().second);
            s_nsl.push({heights[i], i});
            
            while (!s_nsr.empty() && s_nsr.top().first >= heights[j])
                s_nsr.pop();
            nsr[j] = abs(j - s_nsr.top().second);
            s_nsr.push({heights[j], j});
        }
        
        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            maxArea = max(maxArea, heights[i] * (nsl[i] + nsr[i] - 1));
        }
        
        return maxArea;
}

int32_t main()
{
	//type your code here
	a_m();
	cin>>t;
    vector<int>a(t);
    FOR(i,t){
        cin>>a[i];
    }
    cout<<mah(a)<<endl;
    // cout<<"nsl="<<ngl(a)<<endl;
}


