class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) 
    {
        int n=code.size();
        vector<int>ans(n,0);
        if(k==0) return ans;

        for(int i=0; i<n; i++)
        {
            int count=0;
            int val=0;
            if(k>0)
            {
                int j=i+1;
                while(count<k)
                {
                    if(j>=n) j=0;
                    val+=code[j++];
                    count++;
                }
            }
            else
            {
                int j=i-1;
                while(count<abs(k))
                {
                    if(j<0) j=n-1;
                    val+=code[j--];
                    count++;
                }
            }
            ans[i]=val;
        }
        return ans;
    }
};