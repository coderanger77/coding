class Solution {
public:
    int numSquares(int n) {

        vector<int> dp(n+1,0);

        dp[1]=1;
        dp[2]=2;

        for(int i=3;i<=n;i++)
        {
            int square_root=( (int)sqrt(i) );
           // cout<<i<<"-->"<<square_root<<endl;
            if(i-pow( square_root ,2) == 0)
            {
                dp[i]=1;
            }else{

                int min_tillNow=INT_MAX;

                for(int j=1;j<=square_root;j++)
                {
                    min_tillNow=min(min_tillNow,dp[i-j*j]);
                }
                dp[i]=min_tillNow+1;
            }

        }

      /*  for(int i=1;i<dp.size();i++)
        {
            cout<<dp[i]<<" ";
        }
        */
        return dp[n];
    }
};
