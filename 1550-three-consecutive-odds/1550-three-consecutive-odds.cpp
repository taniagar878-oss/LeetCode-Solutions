class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) 
    {
        int n=arr.size();
        int i=0;
        while(i<n)
        {
            while(i<n && arr[i]%2==0)
            {
                i++;
            }
            if(i>n-3) return false;
            int j=i+1;
            int count=1;
            while(j<i+3 && j<n)
            {
                if(arr[j]%2==1) count++;
                j++;
            }
            if(count==3) return true;
            else i++;
        }
        return false;
    }
};