class Solution {
public:
    int reverseBits(int n) 
    {
        int val=n;
        vector<int>bi(32,0);
        int m=31;
        while(val>0)
        {
            bi[m--]=val%2;
            val/=2;
        }
        val=0;
        int power=0;
        for(int i=0; i<32; i++)
        {
            val+=(bi[i]*pow(2,power));
            power++;
        }
        return val;
    }
};