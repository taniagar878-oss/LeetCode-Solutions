class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int n=nums.size();
        int lsum=0 ,tsum=0;
        for(int i=1; i<n; i++)
        {
            tsum+=nums[i];
        }
        int i=0;
        while(i<n)
        {
            if(lsum==tsum) return i;
            else
            {
                lsum+=nums[i++];
                if(i<n) tsum-=nums[i];
            }
        }
        return -1;
    }
};