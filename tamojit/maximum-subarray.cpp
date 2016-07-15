class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int dp[nums.size()] = {0}, res = INT_MIN;
        for(int i = 0; i < nums.size(); i++) {
            dp[i] = max(nums[i], dp[i-1]+nums[i]);
            res = max(res, dp[i]);
        }
        return res;
    }
};
