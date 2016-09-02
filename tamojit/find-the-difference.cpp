class Solution {
public:
    char findTheDifference(string s, string t) {
        int a[26] = {0}, b[26] = {0};
        for(auto i : s) a[i-97]++;
        for(auto i : t) b[i-97]++;
        for(int i = 0; i < 26; i++) if(b[i] > a[i]) return i+97;
        return '0';
    }
};
