#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(0);    cin.tie(0);   cout.tie(0);
#define test int t; cin>>t; while(t--)
#define loop(a,b) for(int i=a;i<b;++i)
#define FOR(n) for(int i=0;i<n;++i)
#define rFOR(n) for(int i=n;i>=0;--i)
#define rloop(a,b) for(int i=b; i>=a; --i)
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define mi map<int,int>
#define si set<int>
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back 
#define po pop_back 

using namespace std;

// int Solve(int i, int k, vi iron, int low, int high, int minAp, bool A[], int S[], int B[]) {
// 	if (low <= high) {
// 		int mid = (low + high) / 2;
// 		int j = iron[mid];
// 		int ap = k + 1 - abs(i - j) - abs(S[i] - S[j]);
		
// 		if (A[j] || abs(B[i] - B[j]) != 0 || ap <= 0 ) {
// 			if (i < j) 
// 				return Solve(i, k, iron, low, mid-1, minAp, A, S, B);
// 			else
// 				return Solve(i, k, iron, mid+1, high, minAp, A, S, B);
// 		}
		
// 		else {
// 			minAp = min(minAp, ap);
// 			int p1 = Solve(i, k, iron, low, mid-1, minAp, A, S, B);
// 			int p2 = Solve(i, k, iron, mid+1, high, minAp, A, S, B);
			
// 			cout<<i<<" "<<j<<" "<<p1<<" "<<p2<<endl;
			
// 			if (p1 != -1 && abs(i-p1) < abs(i-j))	return p1;
// 			else if (p2 != -1 && abs(i-p2) < abs(i-j))	return p2;
// 			else return j;
// 		}
// 	}
// 	return -1;
// }

int main(){
    int t;
	cin>>t;

	queue<int>mag;
	queue<int>iron;

	while(t--){
	    int n,k=0,i=0,j=0,m=0;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int p=k+1;
	    int l=0,r=0,count=0;

	    for(int i=0; i<n; i++){
	        if(s[i]=='M')
	        mag.push(i);
	        if(s[i]=='I')
	        iron.push(i);

	        if(s[i]=='X' || i==n-1){
	            int l,r,sheet=0,q;
	            while(!mag.empty() && !iron.empty()){
	                sheet=0;
	                l=min(mag.front(), iron.front());
	                r=max(mag.front(), iron.front());

	                for(q=l; q<=r; q++){
	                    if(s[q]==':')
	                    sheet++;
	                }
	                if((p-abs(l-r) -sheet)>0){
	                    count++;
	                    mag.pop();
	                    iron.pop();
	                }

	                else if(mag.front() < iron.front()){
	                    mag.pop();
	                }

	                else{
	                 iron.pop();   
	                }
	            }

	            while(!mag.empty())
	            mag.pop();

	            while(!iron.empty())
	            iron.pop();
	        }
	    }
	        cout <<count<< std::endl;
	}
	return 0;
}