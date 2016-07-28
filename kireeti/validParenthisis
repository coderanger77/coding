class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;
        stck.push(s[0]);
        for(int i=1;i<s.length();i++)
        {
            if(stck.empty())
            {
                stck.push(s[i]);
                continue;
            }
            if((stck.top()=='(' && s[i]==')') || (stck.top()=='[' && s[i]==']') || (stck.top()=='{' && s[i]=='}'))
            {
                stck.pop();
            }else{
                stck.push(s[i]);
            }
        }
        
        if(stck.empty())
        {
            return true;
        }else{
         return false;   
        }
        
    }
};
