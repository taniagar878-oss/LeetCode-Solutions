class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) 
    {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i : nums)
        {
            if(i%k==0) mp[i]++;
        }
        int mul=k;
        while(true)
        {
            if(mp.find(mul)==mp.end()) return mul;
            mul+=k;
        }
    }
};