class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r=grid.size();
    int c=grid[0].size();
    vector<vector<int>>ans(r,vector<int>(c,0));
   while(k--)
   {
        for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(j==c-1)
            {
                if(i+1<=r-1)
                    ans[i+1][0]=grid[i][j];
            }
            else
            {
                ans[i][j+1]=grid[i][j];
            }
        }
       
    }
     ans[0][0]=grid[r-1][c-1];
       grid=ans;
   }
    
    return grid;
        
    }
};