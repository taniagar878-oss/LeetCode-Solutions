class Solution {
public:
    void Subset(int index,vector<int>& nums, vector<int>&sub, vector<vector<int>>&ans)
    {
        if(index==nums.size())
        {
            return;
        }
        if(index<nums.size())
        {
            Subset(index+1,nums,sub,ans);
            sub.push_back(nums[index]);
            ans.push_back(sub);
            Subset(index+1,nums,sub,ans);
            sub.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>sub;
        Subset(0,nums,sub,ans);
        ans.push_back({});
        return ans;
    }
};