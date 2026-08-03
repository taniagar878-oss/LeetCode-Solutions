class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int len=0;
        int maxlen=INT_MIN;
        for(int i : nums)
        {
            if(i==0)
            {
                maxlen=max(maxlen,len);
                len=0;
            }
            else
            {
                len++;
            }
        }
        maxlen=max(maxlen,len);
        return maxlen;
    }
};