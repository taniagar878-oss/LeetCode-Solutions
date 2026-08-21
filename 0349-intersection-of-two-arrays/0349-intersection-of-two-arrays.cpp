class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>ans;
        unordered_map<int,int>mp;
        unordered_map<int,int>m;
        for(int i : nums1)
        {
            mp[i]++;
        }
        for(int i : nums2)
        {
            if(mp[i]>=1) m[i]++;
        }
        for(auto it : m)
        {
            ans.push_back(it.first);
        }
        return ans;
    }
};