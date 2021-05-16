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
#define ar numay
#define all(x) (x).begin(), (x).end()
#define str(s) to_string(s);

typedef long long ll;

const int INF = 1e9;

const int MINV = 1;
const int MAXV = 10;


void a_m(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}
//type the code here
vector<int>prime={2,3,5,7,	11,	13,	17,	19,	23,
29	,31	,37	,41	,43	,47	,53	,59	,61	,67,
71	,73	,79	,83	,89	,97	,101	,103,107,109,
113	,127	,131	,137	,139	,149	,151	,157	,163,	167,
173	,179	,181	,191	,193	,197	,199	,211	,223,	227,
229	,233	,239	,241	,251	,257	,263	,269	,271,	277,
281	,283	,293	,307	,311	,313	,317	,331	,337,	347,
349	,353	,359	,367	,373	,379	,383	,389	,397,	401,
409	,419	,421	,431	,433	,439	,443	,449	,457,	461,
463,	467	,479	,487	,491	,499	,503	,509	,521,	523,
541,	547	,557	,563	,569	,571	,577	,587	,593,	599,
601,	607	,613	,617	,619	,631	,641	,643	,647,	653,
659,	661	,673	,677	,683	,691	,701	,709	,719,	727,
733,	739	,743	,751	,757	,761	,769	,773,	787	,797,
809,	811	,821	,823	,827	,829	,839	,853	,857,	859,
863,	877	,881	,883,	887	,907	,911	,919	,929	,937,
941,	947	,953	,967	,971	,977	,983	,991,	997};

bool notdivisible(int t){
	for(auto x:prime){
		if(t%(x*x)==0)
		{
		return false;}
		if(x*x>t)break;
	}
	return true;
}
bool isprime(int t){
	for(auto x:prime){
		if(x==t)return true;
		if(x>t)break;
	}
	return false;
	

}
int fsum(int temp){
	vector<int>num={1};
	for(int i=2;i<temp;i++){
		
		if(!isprime(i) && notdivisible(i)){

			num.push_back(i);
		}
	}
	// for(auto x:num){
	// 	cout<<x<<endl;
	// }
		
	if(num.size()>3){
		for(int i=0;i<num.size()-3;i++){
		for(int j=i+1;j<num.size()-2;j++){
			for(int k=j+1;k<num.size()-1;k++){
				for(int l=k+1;l<num.size();l++){
					if(num[i]+num[j]+num[k]+num[l]==temp){
						cout<<"YES"<<endl;
						cout<<num[i]<<" "<<num[j]<<" "<<num[k]<<" "<<num[l]<<endl;
						 return 0;
					}

	}
	}
	}
	}
	}
	cout<<"NO"<<endl;
	return 1;
	
	

	

}






int32_t main()
{
	//type your code here
	a_m();
	int x;
	cin>>x;
    while(x--){
		int temp;
		cin>>temp;
		// cout<<"case"<<x<<endl;
		int i=fsum(temp);
	}
}

