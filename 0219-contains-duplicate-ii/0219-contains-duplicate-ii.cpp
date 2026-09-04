class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        if(k==0) return false;

        unordered_map<int,vector<int>>mp;
        
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            mp[nums[i]].push_back(i);
        }

        for(auto it : mp)
        {
            int m=it.second.size();
            if(m>1)
            {
                for(int a=0; a<m-1; a++)
                {
                    for(int b=a+1; b<m; b++)
                    {
                        if(abs(it.second[a]-it.second[b])<=k) return true;
                    }
                }
            }
        }
        return false;
    }
};