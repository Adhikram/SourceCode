int dp[1000+1][1000+1];
int longestCommonSubsequence(String text1, String text2) {
    int m=text1.length();
    int n=text2.length();
    for(int i=0;i<=m;i++){
        for(int j=0; j<=n;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }else{
                if(text1[i-1]==text2[j-1]){
                     dp[i][j]= 1+ dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
            
        }
    }
    return dp[m][n];
}
    char*  longestPalindrome(char* s) {
        char* k=s;
        reverse(k.begin(),k.end());
        int result= longestCommonSubsequence(s,k);
        int start=0,end=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==s[i+result-1]){
                start=i;
                end=i+result-1;
                break;
            }
        }
        return s.substr(start,end+1);
    }
    void a_m(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    }
    int main(){
        char x[]="abacdefg";
        cout<<longestPalindrome(x)<<endl;

    }