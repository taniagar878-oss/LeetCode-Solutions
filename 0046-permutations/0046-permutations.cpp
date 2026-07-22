class Solution {
public:
    void Permutations(vector<vector<int>>&ans,vector<int>&permu,vector<int>&freq,vector<int>& nums)
    {
        if(permu.size()==nums.size())
        {
            ans.push_back(permu);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freq[i]==0)
            {
                freq[i]=1;
                permu.push_back(nums[i]);
                Permutations(ans,permu,freq,nums);
                permu.pop_back();
                freq[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
       vector<vector<int>>ans;
       vector<int>permu;
       vector<int>freq(nums.size(),0);
       Permutations(ans,permu,freq,nums);
       return ans; 
    }
};