class Solution {
public:
    long long prod[100010];
    Solution() {
        for(int i = 0; i < 100010; i++) prod[i] = 1;
    }
    long long maxProduct(vector<int>& nums, int start, int end) {
        int n = nums.size();
        prod[start] = nums[start];
        for(int i = start+1; i <= end; i++) prod[i] = nums[i]*prod[i-1];
        int minNeg = start;
        while(minNeg <= end && prod[minNeg] > 0) ++minNeg;
        if(minNeg > end) return prod[end];
        long long ans = prod[minNeg];
        for(int i = start; i <= end; i++) {
            if(prod[i] < 0 && minNeg < i) ans = max(ans, prod[i]/prod[minNeg]);
            ans = max(prod[i], ans);
        }
        return ans;
    }
    int maxProduct(vector<int> &nums) {
        int start = 0, end = 0, n = nums.size();
        long long ans = nums[0];
        while(1) {
            while(start < n && !nums[start]) start++, ans = max(ans, 0LL);
            end = start;
            while(end < n && nums[end]) end++;
            if(start >= n) break;
            ans = max(ans, maxProduct(nums, start, end-1));
            start = end;
            if(end >= n) break;
        }
        return ans;
    }
};
