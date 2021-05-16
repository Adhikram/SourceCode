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
	int m=1;
    while(m<=t){
        int r,c;
        cin>>r>>c;
        vector<vi>a(r,vi(c,0));
        vector<vi>l(r,vi(c,0));
        vector<vi>ri(r,vi(c,0));
        vector<vi>u(r,vi(c,0));
        vector<vi>d(r,vi(c,0));
        
        mi(a,r,c);
        // mo(a,r,c);
        // vector<vector<vector<int>>>>p;
        
        int i=0;
        int j=0;
        int result=0;
        For(i,0,r){
            For(j,0,c){
                if(a[i][j]==1){
                    if(j>0){
                        l[i][j]=1+l[i][j-1];
                    }else{
                        l[i][j]=1;
                    }
                    if(i>0){
                        u[i][j]=1+u[i-1][j];
                    }else{
                        u[i][j]=1;
                    }
                    
                }
            }
        }
        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>=0;j--){
                if(a[i][j]==1){
                    if(j<c-1){
                        ri[i][j]=1+ri[i][j+1];
                    }else{
                        ri[i][j]=1;
                    }
                    if(i<r-1){
                        d[i][j]=1+d[i+1][j];
                    }else{
                        d[i][j]=1;
                    }
                }
            }
        }
        // cout<<"left"<<endl;
        // mo(l,r,c);
        // space;
        // cout<<"right"<<endl;
        // mo(ri,r,c);
        // space;
        // cout<<"up"<<endl;
        // mo(u,r,c);
        // space;
        // cout<<"down"<<endl;
        // mo(d,r,c);
        // space;
        For(i,0,r){
            For(j,0,c){
                if(a[i][j]==1){  
                    // cout<<"i "<<i+1<<" j "<<j+1<<endl;                  
                    if(min(u[i][j],ri[i][j])>=2){
                        result+=min(u[i][j] /2,ri[i][j])+min(u[i][j],ri[i][j]/2)-2;
                    }
                    if(min(d[i][j],ri[i][j])>=2){
                        result+=min(d[i][j] /2,ri[i][j])+min(d[i][j],ri[i][j]/2)-2;
                    }
                    if(min(u[i][j],l[i][j])>=2){
                        result+=min(u[i][j] /2,l[i][j])+min(u[i][j],l[i][j]/2)-2;
                        }
                    
                    if(min(d[i][j],l[i][j])>=2){
                        result+=min(d[i][j] /2,l[i][j])+min(d[i][j],l[i][j]/2)-2;
                    }
                    // cout<<"r "<<ri[i][j]<<" l "<<l[i][j]<<" u "<<u[i][j]<<" d "<<d[i][j]<<" "<<result<<" "<<endl;
                }
        
                

            }
        }
        cout<<"Case #"<<m<<": "<<result<<endl;
        m++;
    }	
    
}
// Case #1: 1
// Case #2: 9

// 2
// 4 3
// 1 0 0
// 1 0 1
// 1 0 0
// 1 1 0
// 6 4
// 1 0 0 0
// 1 0 0 1
// 1 1 1 1
// 1 0 1 0
// 1 0 1 0
// 1 1 1 0
