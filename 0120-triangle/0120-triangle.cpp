class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) 
    {
        int row=triangle.size();
        vector<vector<int>>dp(row,vector<int>(row,10001));

        dp[0][0]=triangle[0][0];

        for(int i=1; i<row; i++)
        {
            dp[i][0]=dp[i-1][0]+triangle[i][0];
            dp[i][i]=dp[i-1][i-1]+triangle[i][i];
        }

        for(int i=2; i<row; i++)
        {
            for(int j=1; j<i; j++)
            {
                dp[i][j]=triangle[i][j]+min(dp[i-1][j-1],dp[i-1][j]);
            }
        }

        int mincost=10001;
        for(int i=0; i<row; i++)
        {
            mincost=min(mincost,dp[row-1][i]);
        }
        return mincost;
    }
};