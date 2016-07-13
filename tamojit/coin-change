class Solution {
public:
    int dp[100010];
    int solve(vector<int>& coins, int amount) {
        if(!amount) return 0;
        if(dp[amount] != -1) return dp[amount];
        int minAmnt = 500010;
        for(int i = 0; i < coins.size(); i++) {
            if(coins[i] > amount) continue;
            minAmnt = min(minAmnt, 1 +  solve(coins, amount-coins[i]));
        }
        return (dp[amount] = minAmnt);
    }
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        int res = solve(coins, amount);
        return (res == 500010 ? -1 : res);
    }
    
};
