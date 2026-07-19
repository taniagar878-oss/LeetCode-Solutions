class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int maxflips=0;
        int maxlen=0;
        for(int start=0,end=0;start<n && end<n; end++)
        {
            if(nums[end]==0) maxflips++;
            while(maxflips>k)
            {
                if(nums[start]==0) maxflips--;
                start++;
            }
            if(maxflips<=k)
            {
                maxlen=max(end-start+1,maxlen);
            }
        }
        return maxlen;
    }
};