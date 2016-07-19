class Solution {
public:

    int maxProfit(vector<int>& p) {
        int ans = 0, n = p.size(), res = 0;
        int f[p.size()+1];
        int s = 0, e = 0;
        while(s < n && e < n) {
            ans = max(ans, p[e]-p[s]);
            f[e] = ans;
            if(p[e] >= p[s]) ++e;
            else s = e;
        }
        s = e = n-1, ans = 0;
        while(s >= 0 && e >= 0) {
            ans = max(ans, p[s]-p[e]);
            res = max(res, f[e-1] + ans);
            if(p[e] <= p[s]) --e;
            else s = e;
        }

        return max(res, f[n-1]);
    }
};
