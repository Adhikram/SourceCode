 int jump(vector<int>& nums) {
        int can_reach=0,max_reach=0,jumps=0;
        for(int i=0;i<nums.size()-1;i++){
            
           max_reach=max(max_reach,i+nums[i]);
            if(i==can_reach){
                jumps++;
                can_reach=max_reach;
            }
            
            
        }
        return jumps;
    }