class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1);
        dp[0]=nums[0],dp[1]=nums[1];
        // for(int i=2;i<n+1;i++){
        //     dp[i]=dp[i-2]+nums[i];
            
        // }
        int max_element=dp[0];
        for(int i=2;i<n+1;i++){
            for(int j=0;j<i-1;j++){
               if(dp[j]>max_element)
               max_element=dp[j]; 
            }
            dp[i]=nums[i]+max_element;
        }
        return max(dp[n-1],dp[n-2]);
    }
};
