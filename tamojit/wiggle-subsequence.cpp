class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size(), dp[n+1][2] = {1}, ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(dp[i][0] == 1 && nums[j]-nums[i] && 1 + dp[i][0] > dp[j][0]) {
                    dp[j][0] = 1 + dp[i][0];
                    dp[j][1] = (nums[j]-nums[i] > 0);
                }
                else if(dp[i][1]*(nums[i] > nums[j]) + (!dp[i][1])*(nums[i] < nums[j]) && 1 + dp[i][0] > dp[j][0]) {
                    dp[j][0] = 1 + dp[i][0];
                    dp[j][1] = !dp[i][1];
                }
            }
            cout<<dp[i][0]<<" ";
            ans = max(ans, dp[i][0]);
        }
        return ans;
    }
};
