class Solution {
public:
    bool checkDivisibility(int n) 
    {
        int num=n;
        int product=1, sum=0;
        while(num>0)
        {
            int dig=num%10;
            sum+=dig;
            product*=dig;
            num=num/10;
        }
        return n%(product+sum)==0;
    }
};