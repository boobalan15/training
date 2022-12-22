class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {   int i,j;
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>> res(col,vector<int>(row,0));
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
               res[j][i]=matrix[i][j];
            }
            
        }
        return res;
        
    }
};
