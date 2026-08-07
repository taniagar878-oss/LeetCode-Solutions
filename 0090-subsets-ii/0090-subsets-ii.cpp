class Solution {
public:
    void SubsetTwo(int index,vector<int>& nums, vector<int>&sub, vector<vector<int>>&ans)
    {
        
        ans.push_back(sub);
            
        for(int i=index; i<nums.size(); i++)
        {
            if(i>index && nums[i]==nums[i-1]) continue;
            
            sub.push_back(nums[i]);
            SubsetTwo(i+1,nums,sub,ans);
            sub.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>sub;
        int index=0;
        
        SubsetTwo(index,nums,sub,ans);
        
        return ans;
    }
};