class Solution {
public:
    vector<string> fullList;
    
    vector<string> generateParenthesis(int remaining, int leftOpen,string s, vector<string>& fullList)
    {
        
        if(remaining==0 && leftOpen==0)
        {
            fullList.push_back(s);
        }
        
        if(remaining>0)
        {
            generateParenthesis(remaining-1,leftOpen+1,s+"(",fullList);
        }
        
        if(leftOpen>0)
        {
            generateParenthesis(remaining,leftOpen-1,s+")",fullList);
        }
        
        return fullList;
    }
    vector<string> generateParenthesis(int n) {
        
        if(n==0)
        {
            return fullList;
        }
        string s="";
        fullList=generateParenthesis(n,0,s,fullList);
        return fullList;
    }
    
    
};
