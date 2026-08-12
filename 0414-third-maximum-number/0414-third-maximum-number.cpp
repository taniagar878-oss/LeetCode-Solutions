class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i : nums)
        {
            mp[i]++;
        }
        int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN;
        vector<int>newnum;
        for(auto i : mp)
        {
            newnum.push_back(i.first);
        }
        int m=newnum.size();
        for(int i : newnum)
        {
            if(i>max1)
            {
                max3=max2;
                max2=max1;
                max1=i;
            }
            else if(i>max2)
            {
                max3=max2;
                max2=i;
            }
            else if(i>max3) max3=i;
        }
        if(m<3) return max1;
        else if(m>=3 ) return max3;
        return max3;
    }
};