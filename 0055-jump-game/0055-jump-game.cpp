class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n,0);
        dp[0]=1;

        for(int i=1; i<n; i++)
        {
            int m=nums[i-1];
            if(dp[i-1]==1)
            {
                for(int j=i; j<i+m; j++)
                {
                    if(j>=n) break;
                    else dp[j]=1;
                }
            }
        }
        return dp[n-1]==1;
    }
};