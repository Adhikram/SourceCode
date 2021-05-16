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
#define ll long long 


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

void  single()
{  
   long long int res=-1,carry=0;
        long int n,k;
        cin>>n>>k;
        long long int arr[100000];
        //long long int *arr=new long long int(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        if(n==1)
            cout<<(arr[0]/k)+1 << endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                
                if(arr[i]>k)
                {
                    arr[i+1]+=arr[i]-k;
                    carry=arr[i]-k;
                }
                if(arr[i]<k)
                {
                    res=i+1;
                    break;
                }
            }
            if(res==-1)
            {
                cout<<n+(carry/k)+1 << endl;
            }
            else
            {
            cout<<res<<endl;
            }
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
  multiple();
//   single();
  
}













