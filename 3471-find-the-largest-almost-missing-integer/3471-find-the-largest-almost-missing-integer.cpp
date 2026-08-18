class Solution {
public:
    int largestInteger(vector<int>& nums, int k) 
    {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i : nums)
        {
            mp[i]++;
        }
        if(k==1)
        {
            int val1=-1;
            for(auto it : mp)
            {
                if(it.second==1) val1=max(val1,it.first);
            }
            return val1;
        }
        else if(k==n)
        {
            int val1=-1;
            for(int i : nums) val1=max(val1,i);
            return val1;
        }
        else
        {
            int val1=nums[0];
            int val2=nums[n-1];
            if(mp[val1]==1 && mp[val2]==1) return max(val1,val2);
            else if(mp[val1]==1) return val1;
            else if(mp[val2]==1) return val2;
        }
        return -1;
    }
};