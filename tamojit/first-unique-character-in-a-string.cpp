class Solution {
public:
    int firstUniqChar(string s) {
        map<int, int> cnt;
        for(auto i : s) cnt[i]++;
        int ind = 0;
        for(auto i : s) {
            if(cnt[i] < 2) return ind;
            ind++;
        }
        return -1;
    }
};
