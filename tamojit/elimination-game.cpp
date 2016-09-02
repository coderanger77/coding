class Solution {
public:
    int solve(int n, int s, int e, int gap, int trn) {
        if(s == e) return s;
        if(s + gap == e) return (trn == 0 ? e : s);
        if(n%2)
            return solve(n-(n/2+n%2), s+gap, e-gap, gap*2, (trn+1)%2);
        if(trn)
            return solve(n-(n/2+n%2), s, e-gap, gap*2, (trn+1)%2);
        return solve(n-(n/2+n%2), s+gap, e, gap*2, (trn+1)%2);
    }
    int lastRemaining(int n) {
        return solve(n, 1, n, 1, 0);
    }
};
