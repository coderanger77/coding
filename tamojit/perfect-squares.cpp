class Solution {
public:
    int dp[10010];
    Solution() {
        memset(dp, -1, sizeof(dp));
    }
    int numSquares(int n) {
        if(!n) return 0;
        if(dp[n] != -1) return dp[n];
        int res = 500010;
        for(int i = 1; i*i <= n; i++)  res = min(res, 1 + numSquares(n-i*i));
        return (dp[n] = res);
    }
};
