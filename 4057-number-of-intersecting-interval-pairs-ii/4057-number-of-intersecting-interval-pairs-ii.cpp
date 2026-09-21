class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) 
    {
        long long pair=0;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end() ,[](vector<int>&a, vector<int>&b)
          {
              if(b[0]==a[0]) return a[1]<b[1];
              else return a[0]<b[0];
          });
        priority_queue<int, vector<int>, greater<int>>right;
        for(int i=0; i<n; i++)
        {
            int L=intervals[i][0];
            while(!right.empty() && right.top()<L)
            {
                right.pop();
            }
            pair+=right.size();
            right.push(intervals[i][1]);
        }
        return pair;
    }
};