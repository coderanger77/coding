class Solution {
public:
    int longestValidParentheses(string s) {
        int lastValid=-1;
        int end=0;
        stack<int> stck;
        int maxLength=0;
        
        if(s.length()<=1)
        {
            return 0;
        }
        
        while(end<s.length())
        {
            
            if(s[end]=='(')
            {
                 stck.push(end);
                  end++;
            }else if(s[end]==')')
            {
                int flag1=0;
                 if(stck.empty())
                 {
                     while(end<s.length() && s[end]!='(')
                     {
                         flag1=1;
                         end++;
                     }
                     lastValid=end-1;
                   //  continue;
                 }else{
                     stck.pop();
                 }
                if(flag1)
                {
                    continue;
                }
                if(stck.empty())
                {
                   //cout<<"--"<<end<<endl;
                    maxLength=max(end-lastValid,maxLength);
                    int flag=0;
                    end++;
                    while(end<s.length() && s[end]!='(')
                       { 
                        flag=1;
                        end++;
                       }
                       if(flag)
                       {
                           lastValid=end-1;
                          // cout<<lastValid<<" "<<end<<endl;
                       }
                   
                }else{
                    
                    maxLength=max(end-stck.top(),maxLength);
                    end++;
                }
                
            }
           
        }
        
        return maxLength;
        
    }
};
