class Solution {
public:
    int longestValidParentheses(string s) {
       
       int len=s.length();
       stack<int> stck;
       int maxLength=0;
       if(!len)
       {
           return 0;
       }
       
       for(int i=0;i<len;i++)
       {
           if(s[i]=='(')
           {
               stck.push(i);
           }else{
               if(stck.empty())
               {
                   stck.push(i);
               }else{
                   if(s[stck.top()]=='(')
                   {
                       stck.pop();
                   }else{
                       stck.push(i);
                   }
               }
           }
       }
       
       
       if(stck.empty())
       {
           return len;
       }else{
           int a=len;
           int b;//=stck.top();
           
           while(!stck.empty())
           {
               b=stck.top();
               stck.pop();
               maxLength=max(maxLength,a-b-1);
               a=b;
           }
           if(a>0)
           {
               maxLength=max(maxLength,a);
           }
       }
       
       
       
       return maxLength;      
    }
};
