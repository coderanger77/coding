class Solution {
public:
    int n;
    pair<int, int> evenPallindrome(string &s, int ind) {
        int l = ind, r = ind+1;
        while(l >= 0 && r < n && s[l] == s[r]) l--, r++;
        return make_pair(l,r);
    }
    pair<int, int> oddPallindrome(string &s, int ind) {
        int l = ind-1, r = ind+1;
        while(l >= 0 && r < n && s[l] == s[r]) l--, r++;
        return make_pair(l,r);
    }
    int diff(pair<int, int> a) {
        return a.second-a.first-1;
    }
    string longestPalindrome(string s) {
        n = s.size();
        int l = 0;
        pair<int, int> res = make_pair(-1, n+1), o, e;
        for(int i = 0; i < n; i++) {
            o = oddPallindrome(s, i);
            e = evenPallindrome(s, i);
            int ol = diff(o), el = diff(e);
            if(max(el, ol) > l) {
                l = max(el, ol);
                res = ol > el ? o : e;
            }
        }
        return s.substr(res.first+1, diff(res));
    }
};
