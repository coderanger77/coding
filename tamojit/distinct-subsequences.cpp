class Solution {
public:
    int dp[1000];
    int numDistinct(string &s, string &t, int n, int m) {
        int pre = 0;
        dp[0] = 1;
        for(int i = 1; i <= n; i++) {
            pre = dp[0];
            for(int j = 1; j <= m; j++) {
                int tmp = dp[j];
                dp[j] = dp[j] + pre*(s[i-1] == t[j-1]);
                pre = tmp;
            }
        }
        return dp[m];
    }
    int numDistinct(string s, string t) {
        int n = s.size(), m = t.size();
        if(m > n) return 0;
        memset(dp, 0, sizeof(dp));
        return numDistinct(s, t, n, m);
    }
};
