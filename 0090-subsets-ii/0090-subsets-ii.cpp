class Solution {
public:
    void SubsetTwo(int index,vector<int>& nums, vector<int>&sub, vector<vector<int>>&ans)
    {
        if(index==nums.size())
        {
           ans.push_back(sub);
            return;
        }
        
            SubsetTwo(index+1,nums,sub,ans);
            sub.push_back(nums[index]);
            SubsetTwo(index+1,nums,sub,ans);
            sub.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>sub;
        int index=0;
        SubsetTwo(index,nums,sub,ans);
        vector<vector<int>>sol;
        sort(ans.begin(),ans.end());
        for(auto vec : ans)
        {
            if(sol.size()==0) sol.push_back(vec);
            else
            {
                int n=sol.size();
                int m=sol[n-1].size();
                int i=vec.size();
                if(m!=i) sol.push_back(vec);
                else 
                {
                    int val=0;
                    for(int j=0; j<i; j++)
                    {
                        if(vec[j]==sol[n-1][j]) val++;
                    }
                    if(val!=i) sol.push_back(vec);
                }
            }
        }
        return sol;
    }
};