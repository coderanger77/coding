#define check(a, b) ((a) >= 0 ? (b) : 0)
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int onesRight[matrix.size()][matrix[0].size()] = {0};
        int ans = 0, n = matrix[0].size(), m = matrix.size();
        for(int i = 0; i < m; i++) 
            for(int j = 0; j < n; j++) 
                onesRight[i][j] = (matrix[i][j] == '1') + onesRight[i][max(0, j-1)]; 
        for(int c1 = 0; c1 < n; c1++)
            for(int c2 = c1; c2 < n; c2++) {
                int start = 0, end = 0, maxR = 0;
                while(start < m && end < m) {
                    if(onesRight[end][c2] - check(c1-1, onesRight[end][c1-1]) == c2-c1+1)  {
                        if(c2-c1+1 == end-start+1)
                            maxR = max(maxR, end-start+1);
                        ++end;
                    }
                    else start = end = start+1;
                }
                ans = max(ans, (maxR)*(c2-c1+1));
            }
        return ans;
    }
};
