class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) 
    {
        int n=days.size();

        vector<int>dp(n);
        dp[0]=min(costs[0],min(costs[1],costs[2]));

        for(int i=1; i<n; i++)
        {
            int day=dp[i-1]+costs[0];

            int j=i;
            while(j>=0 && days[j]>=days[i]-6)
            {
                j--;
            }
            int week=(j>=0? dp[j] : 0)+costs[1];

            j=i;
            while(j>=0 && days[j]>=days[i]-29)
            {
                j--;
            }
            int month=(j>=0? dp[j] : 0)+costs[2];

            dp[i]=min(day,min(month,week));
        }

        return dp[n-1];
    }
};