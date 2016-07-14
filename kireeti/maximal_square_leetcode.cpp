
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

        bool flag=0;
        int count=0;
        for(int i=0;i<matrix.size();i++)
            {
                for(int j=0;j<matrix[i].size();j++)
                {
                    if(matrix[i][j]=='1')
                    {
                        //cout<<"lol"<<endl;
                        count=1;
                        flag=1;
                        continue;
                    }else{
                       // cout<<"lolwa"<<endl;
                    }
                }
                if(flag)
                    continue;
            }
            flag=1;

        while(flag)
        {
            flag=0;

            vector<vector<char>> mat(matrix.size()-1,vector<char>(matrix[0].size()-1,'0'));
            for(int i=0;i<matrix.size()-1;i++)
            {
                for(int j=0;j<matrix[i].size()-1;j++)
                {
                    if(matrix[i][j]=='1' && matrix[i+1][j]=='1' && matrix[i][j+1]=='1' && matrix[i+1][j+1]=='1')
                    {
                        mat[i][j]='1';
                        flag=1;

                    }else{
                        mat[i][j]='0';
                    }
                }
            }
            if(flag)
            {
                count++;
            }


            matrix=mat;


        }

        return count*count;
    }
};
