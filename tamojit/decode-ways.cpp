#define chk(a, b) (a > -1 ? b : 1)
class Solution {
public:
    int n;
    int toInt(int a, int b) {
        return (a-48)*10+(b-48);
    }
    int numDecodings(string s, int start) {
        int dp[n+1] = {0}, m;
        dp[0] = (s[0] > '0');
        for(int i = 1; i < n; i++) {
            m = toInt(s[i-1], s[i]);
            if(s[i-1] > '0' && m && m < 27) dp[i] = chk(i-2, dp[i-2]);
            if(s[i] > '0') dp[i] += dp[i-1];
        }
        return dp[n-1];
    }
    int numDecodings(string s) {
        n = s.size();
        return numDecodings(s, 0);
    }
};
