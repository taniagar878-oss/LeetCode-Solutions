class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>maxmoney(n+1,0);
        maxmoney[1]=nums[0];
        for(int i=2; i<=n; i++)
        {
            maxmoney[i]=max(nums[i-1]+maxmoney[i-2],maxmoney[i-1]);
        }
        return maxmoney[n];
    }
};