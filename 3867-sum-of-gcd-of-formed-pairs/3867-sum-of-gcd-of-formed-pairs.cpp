class Solution {
public:
    int GCD(int a,int b)
    {
        int num1=max(a,b),num2=min(a,b);
        while(num2!=0)
        {
            int rem=num1%num2;
            num1=num2;
            num2=rem;
        }
        return num1;
    }
    long long gcdSum(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>gcd(n,0);
        gcd[0]=nums[0];
        int maxval=nums[0];
        for(int i=1;i<n;i++)
        {
            maxval=max(maxval,nums[i]);
            if(nums[i]==maxval) gcd[i]=maxval;
            else gcd[i]=GCD(maxval,nums[i]);
        }
        sort(gcd.begin(),gcd.end());
        int i=0,j=n-1;
        long long sum=0;
        while(i<j)
        {
            sum+=GCD(gcd[i],gcd[j]);
            i++;
            j--;
        }
        return sum;
    }
};