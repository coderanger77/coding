class Solution {
public:

    int maxProfit(vector<int>& p) {
        int ans = 0, n = p.size();
        int f[p.size()+1], b[p.size()+1];
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
            b[e] = ans;
            if(p[e] <= p[s]) --e;
            else s = e;
        }
        ans = 0;
        for(int i = 1; i < n-1; i++) {
            ans = max(ans, f[i]+b[i+1]);
        }
        return max(ans, f[n-1]);
    }
};
