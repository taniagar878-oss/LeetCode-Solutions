class Solution {
public:
    bool isPowerOfThree(int n) 
    {
        if(n<=0) return false;
        int val=n;
        while(val>=3)
        {
            if(val%3!=0) return false;
            val/=3;
        }
        if(val==1) return true;
        return false;
    }
};