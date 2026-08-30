class Solution {
public:
    int minimumDeletions(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1) return 1;
        int maxel=INT_MIN, minel=INT_MAX;
        int minindex=-1,maxindex=-1;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]>maxel)
            {
                maxel=nums[i];
                maxindex=i;
            }
            if(nums[i]<minel)
            {
                minel=nums[i];
                minindex=i;
            }
        }
        int val1=max(minindex,maxindex)+1;
        int val2=n-min(minindex,maxindex);
        int val3=min(minindex,maxindex)+1+(n-max(minindex,maxindex));
        ans=min(val1,min(val3,val2));
        return ans;
    }
};