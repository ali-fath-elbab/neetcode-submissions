class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=nums[0];
        int n=nums.size();
        int curr=nums[0];
        for(int i=1;i<n;i++){
            if(curr<0)
            curr=0;
            curr+=nums[i];
            cout<<curr;
            sum=max(sum,curr);

            


        }
        return sum;
    }
};
