class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(!n) return 1;
        long long ans = 1, i = 9, prod = 9;
        while(n) ans += prod, prod *= (i--), n--;
        return ans;
    }
};
