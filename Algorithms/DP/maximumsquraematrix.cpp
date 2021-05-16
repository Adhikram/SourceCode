 int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.empty())return 0;
        int n=matrix[0].size();
        int m=matrix.size();
        
        // cout<<n<<m<<endl;
        int ans=0;
        
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            if(matrix[0][i]=='1')dp[0][i]=1;
            ans=max(ans,dp[0][i]);
        }
        for(int i=0;i<m;i++){
            if(matrix[i][0]=='1')dp[i][0]=1;
            ans=max(ans,dp[i][0]);
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]=='1')
                {
                    dp[i][j]=1+min(min(dp[i-1][j],dp[i-1][j-1]),dp[i][j-1]);
                    ans=max(ans,dp[i][j]);
                }else{continue;}
                
            }
        }
        // for(auto x:dp){
        //     for(auto y:x){
        //         cout<<y<<" "
        //     }
        //     cout<<endl;
        // }
        return ans*ans;
    }