class Solution {
public:
    int totalFruit(vector<int>& nums) 
    {
        int n=nums.size();
        int b1=-1,b2=-1;
        int b1i=0,b2i=0;
        int maxtree=INT_MIN;
        
        for(int l=0,r=0; l<n,r<n; r++)
        {
            if(nums[r]==b1 || b1==-1)
            {
                b1=nums[r];
                b1i=r;
            }
            else if((b2==-1 && nums[r]!=b1) || nums[r]==b2)
            {
                b2=nums[r];
                b2i=r;
            }
            else 
            {
                maxtree=max(maxtree,r-l);
                if(b1i<b2i) l=b1i+1;
                else l=b2i+1;
                if(nums[r-1]==b1)
                {
                    b2=nums[r];
                    b2i=r;
                }
                else
                {
                    b1=nums[r];
                    b1i=r;
                } 
            }
            if(r==n-1) maxtree=max(maxtree,r-l+1);
        }
        return maxtree;
    }
};