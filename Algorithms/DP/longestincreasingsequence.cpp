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
vi a,b,c,d;


void a_m(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}
//type the code here




int lis(vi a){
   
    
    int n=a.size();
        if(!n){
            return 0;
        }
    int arr[n];
    arr[0]=1;
    int ans=0;
    
    for(int i=1;i<n;i++){
        arr[i]=1;
        // cout<<a[i]<<"      "<<endl;
        for(int j=0;j<i;j++){
            // cout<<a[j]<<" ";
        
            if(a[i]>a[j] && arr[i] < arr[j] + 1){
                arr[i]=arr[j]+1;
                
                
            }
            // cout<<endl<<endl;
        }
    } 
    return *max_element(arr,arr+n);
    }


int32_t main()
{
	//type your code here
	a_m();
	cin>>n;
    vi a;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.pb(temp);
        cout<<a[i]<<endl;
    }
    cout<<"ans"<<lis(a)<<endl;
}

