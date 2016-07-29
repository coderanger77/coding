class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> dp(num+1, 0);
        int k = 2;
        dp[1] = 1;
        for(int i = 2; i <= num; ) {
            for(int j = k; i <= num && j >= 1; j--, i++) dp[i] = dp[i-k] + 1;
            k <<= 1;
        }
        return dp;
    }
};
