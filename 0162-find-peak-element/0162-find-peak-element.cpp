class Solution {
public:
    int findPeakElement(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1) return 0;

        if(n==2 && nums[0]==nums[1]) return -1;
        if(nums[0]>nums[1]) return 0;
        else if(nums[n-1]>nums[n-2]) return n-1;
        
        int l=0,r=n-1;
        int mid=0;
        while(l<r)
        {
            mid=l+((r-l)/2);
            if(mid!=0 && mid!=n-1 && nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]) return mid;
            else if( mid!=n-1 && nums[mid]>nums[mid+1]) r=mid;
            else if(mid!=n-1 && nums[mid+1]>nums[mid]) l=mid+1;

        }
        return -1;
    }
};