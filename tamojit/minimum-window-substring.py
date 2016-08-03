class Solution {
public:
    string minWindow(string s, string t) {
        int cnt[256] = {0};
        for(auto i : t) cnt[i]++;
        int st = 0, e = 0, n = s.size(), l = 0, m = t.size(), res = INT_MAX, h = 0;
        while(e < n) {
            l += (cnt[s[e++]]-- > 0);
            while(l == m) {
                 if(e - st < res) res = min(res, e-(h=st));
                l -= (cnt[s[st++]]++ == 0);
            }
        }
        return res == INT_MAX ? "" : s.substr(h, res);
    }
};
