class Solution {
public:
    int dp[100010][2];
    int solve(vector<int>& nums, int start) {
        int n = nums.size(), maxi = 0;
        for(int i = 0; i < n; i++) {
            dp[i][0] = max(dp[i][0], 1);
            for(int j = i+1; j < n; j++) 
                if(nums[j] % nums[i] == 0 && 1+dp[i][0] > dp[j][0]) {
                    dp[j][0] = 1 + dp[i][0];
                    dp[j][1] = i;
                }
            if(dp[i][0] > dp[maxi][0]) maxi = i;        
        }
        return maxi;
    }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        sort(nums.begin(), nums.end());
        vector<int> res;
        int start = solve(nums, 0), n = nums.size();
        if(!n) return res;
        while(start >= 0) res.push_back(nums[start]), start = dp[start][1];
        return res;
    }
};