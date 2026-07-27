class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1) return pow(nums[0]-1,2);
        if(n==2) return (nums[0]-1)*(nums[1]-1);
        int max1=0,max2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>max1)
            {
                max2=max1;
                max1=nums[i];
            }
            else if(nums[i]>max2) max2=nums[i];
        }
        return (max1-1)*(max2-1);
    }
};