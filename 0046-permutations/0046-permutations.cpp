class Solution {
public:
    void Permutation(vector<int>&comb, vector<int>&freq, vector<vector<int>>&ans, vector<int>& nums)
    {
        if(comb.size()==nums.size())
        {
            ans.push_back(comb);
            return;
        }
        for(int i=0; i<nums.size(); i++)
        {
            if(freq[i]==0)
            {
                comb.push_back(nums[i]);
                freq[i]=1;
                Permutation(comb,freq,ans,nums);
                comb.pop_back();
                freq[i]=0;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>freq(n,0);
        vector<vector<int>>ans;
        vector<int>comb;
        Permutation(comb,freq,ans,nums);
        return ans;
    }
};