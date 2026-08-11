class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) 
    {
        int m=target.size();
        if(target[m-1]>n) return {};
        vector<string>ans;
        int i=1;
        int val=1,index=0;
        while(index<m)
        {
            if(val==target[index])
            {
                ans.push_back("Push");
                val++;
                index++;
            }
            else
            {
                int times=0;
                while(val<target[index])
                {
                    ans.push_back("Push");
                    times++;
                    val++;
                }
                while(times>0)
                {
                    ans.push_back("Pop");
                    times--;
                }
                ans.push_back("Push");
                val++;
                index++;
            }
        }
        return ans;
    }
};