class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {

        if(matrix.size()==0)
        {
            return 0;
        }else if(matrix.size()==1)
        {

                for(int i=0;i<matrix[0].size();i++)
                {
                    if(matrix[0][i]=='1')
                    {
                        return 1;
                    }
                }
            return 0;
        }
        int count=0;


        vector<vector<int>> size(matrix.size(),vector<int>(matrix[0].size(),0));

        for(int i=0;i<matrix[0].size();i++)
        {
            size[0][i]=matrix[0][i]-'0';
            count=max(size[0][i],count);
        }

        for(int i=0;i<matrix.size();i++)
        {
            size[i][0]=matrix[i][0]-'0';
            count=max(size[i][0],count);
        }

        for(int i=1;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[i].size();j++)
            {
                if(matrix[i][j]=='0')
                {
                    size[i][j]=0;
                }else{
                    size[i][j]=min(size[i-1][j],min(size[i-1][j-1],size[i][j-1]))+1;
                    count=max(size[i][j],count);
                }
            }
        }





        return count*count;
    }
};
