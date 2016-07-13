class Solution {
public:
    int nthUglyNumber(int n) {
        map<long long, bool> uglyNumbers;
        uglyNumbers[1] = 1;
        long long count = n, ans;
        while(count) {
            ans = uglyNumbers.begin()->first;
            count--;
            uglyNumbers.erase(ans);
            uglyNumbers[ans*2] = uglyNumbers[ans*3] = uglyNumbers[ans*5];
        }
        return ans;
    }
};
