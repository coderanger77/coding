class Solution {
public:
    int maxProfit(vector<int>& p) {
        int dp[p.size()+1] = {0}, mxm[p.size()+10] = {0}, n = p.size(), res = 0;
        for(int i = n-2; i >= 0; i--) {
            for(int j = i+1; j < n; j++) {
                if(p[j] >= p[i]) {
                    dp[i] = max(dp[i], mxm[j+2]+p[j]-p[i]);
                }
            }
            res = max(res, dp[i]);
            mxm[i] = res;
        }
        return res;
    }
};
