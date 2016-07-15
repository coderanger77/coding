class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int dp[nums.size()+1] = {0}, res = 0, n = nums.size();
        for(int i = 0; i < n; i++) {
            dp[i] = max(1, dp[i]);
            for(int j = i+1; j < n; j++) if(nums[j] > nums[i]) dp[j] = max(dp[j], 1+dp[i]);
            res = max(res, dp[i]);
        }
        return res;
    }
};
