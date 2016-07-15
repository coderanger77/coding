class NumMatrix {
public:
    int dp[1010][1010], n, m;
    NumMatrix(vector<vector<int>> &matrix) {
        if(!matrix.empty()) {
            n = matrix.size();
            m = matrix[0].size();
            memset(dp, 0, sizeof(dp));
            for(int i = 0; i < n; i++)
                for(int j = 0; j < m; j++) dp[i+1][j+1] = matrix[i][j] + dp[i+1][j];
            for(int i = 0; i < n; i++)
                for(int j = 0; j < m; j++) dp[i+1][j+1] += dp[i][j+1];
        } else {
            n = m = 0;
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        return dp[row2+1][col2+1]-dp[row1][col2+1]-dp[row2+1][col1]+dp[row1][col1];
    }
};


// Your NumMatrix object will be instantiated and called as such:
// NumMatrix numMatrix(matrix);
// numMatrix.sumRegion(0, 1, 2, 3);
// numMatrix.sumRegion(1, 2, 3, 4);
