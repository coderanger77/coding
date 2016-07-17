class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mxm[p.size()+10] = {0}, n = p.size(), res = 0;
        for(int i = n-2; i >= 0; i--) {
            for(int j = i+1; j < n; j++) {
                if(p[j] >= p[i]) {
                    mxm[i] = max(mxm[i], mxm[j+2]+p[j]-p[i]);
                }
            }
            res = max(res, mxm[i]);
            mxm[i] = res;
        }
        return res;
    }
};
