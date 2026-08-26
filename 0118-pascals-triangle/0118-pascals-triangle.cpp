class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        int n=numRows;
        vector<vector<int>>dp(n,vector<int>(n,0));
        vector<vector<int>>ans;
        int index=0;
        for(int i=0; i<n; i++)
        {
            dp[i][0]=1;
            dp[i][index++]=1;
        }
        for(int i=2; i<n; i++)
        {
            for(int j=1; j<i; j++)
            {
                dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
        }
        ans.push_back({1});
        for(int i=1; i<n; i++)
        {
            vector<int>sub={1};
            for(int j=1; j<i; j++)
            {
                sub.push_back(dp[i][j]);
            }
            sub.push_back(1);
            ans.push_back(sub);
        }
        return ans;
    }
};