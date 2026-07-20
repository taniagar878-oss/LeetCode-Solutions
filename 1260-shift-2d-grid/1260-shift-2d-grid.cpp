class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>lastcol(n,0);
        while(k!=0)
        {
            for(int i=0;i<n;i++)
            {
                lastcol[i]=grid[i][m-1];
            }
            for(int i=0;i<n;i++)
            {
                for(int j=m-1;j>0;j--)
                {
                    grid[i][j]=grid[i][j-1];
                }
            }
            for(int i=0;i<n-1;i++)
            {
                grid[i+1][0]=lastcol[i];
            }
            grid[0][0]=lastcol[n-1];
            k--;
        }
        return grid;
    }
};