class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, end = 0, n = s.size();
        int cnt[256] = {0}, res = 0;
        while(end < n) {
            ++cnt[s[end]];
            if(cnt[s[end]] > 1) {
                res = max(res, end-start);
                while(s[end] != s[start]) --cnt[s[start]], ++start;
                --cnt[s[start]];
                ++start;
            }
            ++end;
        }
        if(end != start) res = max(res, end-start);
        return res;
    }
};
