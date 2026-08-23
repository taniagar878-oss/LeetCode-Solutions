class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        int n=nums1.size();
        int m=nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0, j=0;

        vector<int>ans;
        while(i<n && j<m)
        {
            while(j<m && i<n && nums1[i]>nums2[j]) j++;
            while(i<n && j<m && nums2[j]>nums1[i]) i++;
            while(i<n && j<m && nums1[i]==nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return ans;
    }
};