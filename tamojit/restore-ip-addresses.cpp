class Solution {
public:
    vector<string> res;
    int n;
    int validate(string &s) {
        if(s.find("0") == 0 && s.size() > 1) return 0;
        int o = toInt(s);
        return o >= 0 && o <= 255;
    }
    int toInt(string &s) {
        return s.empty() ? 0 : atoi(s.c_str());
    }
    void restoreIpAddresses(string &s, int start, string c) {
        if(start == n) {
            int cnt = 0;
            for(auto i : c) cnt += (i == '.'); 
            if(cnt != 4) return ;
            else c.pop_back();
            if(c.find_last_of('.') < c.size()-1)
                res.push_back(c);
            return;
        }
        string last_octet = "";
        int i = start;
        while(1) {
            last_octet.push_back(s[i++]);
            if(i <= n && validate(last_octet))
                restoreIpAddresses(s, i, c + last_octet + ".");
            else 
                break;
        }
    }
    vector<string> restoreIpAddresses(string s) {
        res = vector<string>();
        n = s.size();
        if(n <= 12)
            restoreIpAddresses(s, 0, "");
        return res;
    }
};
