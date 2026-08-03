class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) 
    {
        vector<int>ans(2*n,0);
        int left=0,right=n;
        for(int i=0;i<2*n;i++)
        {
            if(i%2==0) ans[i]=nums[left++];
            else ans[i]=nums[right++];
        }
        return ans;
    }
};