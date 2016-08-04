class Solution {
public:
    int n, m;
    bool isMatch(string &s, string &p, int i, int j) {
        if(j == m) {
            return i == n;
        }
        if(j > m) return 0;
        char c;
        if(j+1 < m) {
            c = p[j+1];
            if(c == '*') {
                return  (isMatch(s, p, i, j+2)) || ((i < n) && (p[j] == '.' || s[i] == p[j]) && isMatch(s, p, i+1, j));
            }
        }
        return (p[j] == '.' || s[i] == p[j]) && isMatch(s, p, i+1, j+1);
    }
    bool isMatch(string s, string p) {
        n = s.size(), m = p.size();
        return isMatch(s, p, 0, 0);
    }
};
