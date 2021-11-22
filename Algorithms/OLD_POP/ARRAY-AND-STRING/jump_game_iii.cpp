auto speed=[]()
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return nullptr;
}();
class Solution {

public:
   bool dp[1000001];
    bool solve(vector<int>& arr, int start) {
        // cout<<start<<endl;
        if(start>arr.size()-1 or start<0 or dp[start] )return false;
        if(arr[start] == 0)return true;
        dp[start]=true;
        return solve(arr, start+arr[start]) or solve(arr,start-arr[start]);
    }
    bool canReach(vector<int>& arr, int start) {
        memset(dp,false,sizeof dp);
        return solve(arr,start);
    }
};