class Solution {
public:
    void combsum(vector<int>& candidates, int target,int &sum,int index,vector<vector<int>>&ans,vector<int>&comb)
    {
        if(sum==target)
        {
            ans.push_back(comb);
            return;
        }
        if(index<candidates.size() && sum<target)
        {
            combsum(candidates,target,sum,index+1,ans,comb);
            sum+=candidates[index];
            comb.push_back(candidates[index]);
            combsum(candidates,target,sum,index,ans,comb);

            int n=comb.size();
            sum-=comb[n-1];
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>>ans;
        vector<int>comb;
        int sum=0;
        combsum(candidates,target,sum,0,ans,comb);
        return ans;
    }
};