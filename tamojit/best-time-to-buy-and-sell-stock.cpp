class Solution {
public:
    int maxProfit(vector<int>& p) {
        int s = 0, e = 0, n = p.size(), res = 0;
        while(e < n) {
            res = max(res, p[e]-p[s]);
            if(e < n && p[e] >= p[s]) e++;
            else s = e;
        }
        return res;
    }
};
