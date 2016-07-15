class Solution {
public:
    int c[1010][1010];
    int choose(int n, int r) {
        if(!r || n == r) return 1;
        if(n-r == 1) return n;
        if(c[n][r] != -1) return c[n][r];
        return (c[n][r] = choose(n-1, r) + choose(n-1, r-1));
    }
    int uniquePaths(int m, int n) {
        memset(c, -1, sizeof(c));
        m -= 1, n -= 1;
        return choose(m+n, n);
    }
};
