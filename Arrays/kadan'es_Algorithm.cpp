class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int local_sum = 0;

        for(int i = 0;i<nums.size();i++){
            local_sum += nums[i];
            if(local_sum>ans){
                ans = local_sum;
            }
            if(local_sum<0){
                local_sum = 0;
            }
        }

        return ans;
    }
};