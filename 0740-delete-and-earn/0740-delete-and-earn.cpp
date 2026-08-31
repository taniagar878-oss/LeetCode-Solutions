class Solution {
public:
    int deleteAndEarn(vector<int>& nums) 
    {
        unordered_map<int,int>mp;
        int n=nums.size();
        int maxi=0;
        for(int i : nums)
        {
            mp[i]++;
            maxi=max(maxi,i);
        }
        vector<int>points(maxi+1,0);
        for(auto it : mp)
        {
            points[it.first] = it.first * it.second;
        }
        vector<int>dp(maxi+1,0);
        dp[0]=0;
        dp[1]=points[1];
        if (maxi>=2) dp[2]=max(points[2],points[1]);
        for(int i=3; i<=maxi; i++)
        {
            dp[i]=max(points[i]+dp[i-2],dp[i-1]);
        }
        return dp[maxi];
    }
};