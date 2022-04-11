class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>>ans(n,vector<int>(m,0));
   while(k--)
   {
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(j==m-1)
            {
                if(i+1<=n-1)
                    ans[i+1][0]=grid[i][j];
            }
            else
            {
                ans[i][j+1]=grid[i][j];
            }
        }
       
    }
     ans[0][0]=grid[n-1][m-1];
       grid=ans;
   }
    
    return grid;
        
    }
};