class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        int power=0;
        int num=n;
        while(num>=4)
        {
            power++;
            num/=4;
        }
        num=pow(4,power);
        return num==n;
    }
};