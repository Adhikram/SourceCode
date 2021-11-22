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

typedef long long ll;

const int INF = 1e9;

const int MINV = 1;
const int MAXV = 10;

//type the code here
int remove_duplicate(int a[],int N)
{
    for(int i=0;i<N;i++){
        if(a[i]==a[i+1]){
            int j=0;
            int k=i;
            while(j<N){
                if(a[k]!=a[1+k])
                	{break;
                	}else{j++;
                		k++;
                	}
            }
            int t=i;
            while(t<N){
            	a[t]=a[t+j];
            	t=t+j;
            }
            N-=j;
        }
    }
    return (N);
}





int32_t main()
{
	//type your code here

	int x;
	cin>>x;
    while(x--){
        int temp;
        cin>>temp;
        int a[temp];
        for (int i = 0; i < temp; ++i)
        {
        	cin>>a[i];
        }
        int n= remove_duplicate(a,temp);
        for (int i = 0; i < n; ++i)
        {
        	cout<<a[i]<<" ";
        }

    }
   
}

