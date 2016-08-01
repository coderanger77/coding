class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        multiset<int> c;
        int n = matrix.size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                c.insert(matrix[i][j]);
            }
        }
        int ck = 0;
        for(auto i : c) {
            if(++ck == k) return i;
        }
        return 0;
    }
};
