class Solution {
public:
    void subset(vector<int>sub,vector<vector<int>>&ans,int index,vector<int>nums)
    {
        if(index==nums.size())
        {
            return;
        }
        if(index<nums.size())
        {
            subset(sub,ans,index+1,nums);
        }
        if(index<nums.size())
        {
            sub.push_back(nums[index]);
            subset(sub,ans,index+1,nums);
        }
        ans.push_back(sub);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        subset({},ans,0,nums);
        ans.push_back({});
        return ans;
    }
};