class Solution {
public:
    int dp[1010][1010], n, m;
    int lcs(string &a, string &b, int i, int j) {
        if(i == 0) return j;
        if(j == 0) return i;
        if(dp[i][j] != -1) return dp[i][j];
        dp[i][j] = (a[i] != b[j]) + lcs(a, b, i-1, j-1);
        return (dp[i][j] =  min(dp[i][j], 1 + min(lcs(a, b, i-1, j), lcs(a, b, i, j-1))));
    }
    int minDistance(string w1, string w2) {
        n = w1.size(), m = w2.size();
        memset(dp, -1, sizeof(dp));
        w1 = "0"+w1;
        w2 = "0"+w2;
        return lcs(w1, w2, n, m);
    }
};
