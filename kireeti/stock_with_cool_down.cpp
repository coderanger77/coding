class Solution {
public:
    int maxProfit(vector<int>& prices) {
         vector<int> dp(prices.size(),0);
         if(prices.size()==0)
         {
             return 0;
         }
         dp[0]=0;
         int maxProfit= dp[0];
         cout<<dp[0]<<" ";
         for(int i=1;i<prices.size();i++)
         {
             for(int j=0;j<i;j++)
             {
                 if(j<2)
                 {
                     dp[i]=max(dp[i-1],max(prices[i]-prices[j],dp[i]));
                 }else{
                     dp[i]=max(dp[i-1],max(prices[i]-prices[j]+dp[j-2],dp[i]));
                 }
             }
             cout<<dp[i]<<" ";
            
         }
         
         return dp[prices.size()-1];
        
    }
};
