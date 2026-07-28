class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) 
    {
        int n=nums.size();
        if(n<3) return 0;
        if(n==3 && nums[0]-nums[1]==nums[1]-nums[2]) return 1;
        else if(n==3 && nums[0]-nums[1]!=nums[1]-nums[2]) return 0;
        
        int count=0;
        int start=0,end=1;
        int dif=0;
        while(start<n-2 && end<n)
        {
            while(end<n-1 && nums[end-1]-nums[end]==nums[end]-nums[end+1])
            {
                end++;
            }
            if(end-start+1>=3) count+=end-start+1-2;
            while(end-start+1>3)
            {
                start++;
                count+=end-start+1-2;
            }
            start=end;
            end++;
        }
        return count;
    }
};