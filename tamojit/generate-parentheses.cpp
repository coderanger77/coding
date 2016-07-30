class Solution {
public:
    void solve(int open, int closed, int n, string &current, vector<string> &res) {
        if(current.size() == 2*n) {
            res.push_back(current);
            return;
        }
        if(open < n) {
            current.push_back('(');
            solve(open+1, closed, n, current, res);
            current.pop_back();
        }
        if(closed < open) {
            current.push_back(')');
            solve(open, closed+1, n, current, res);
            current.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s;
        solve(0, 0, n, s, res);
        return res;
    }
};
