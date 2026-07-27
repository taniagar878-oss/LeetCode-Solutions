class Solution {
public:
    bool ispalindrome(string sub,int index,int end)
    {
        int l=index,r=end;
        while(l<r)
        {
            if(sub[l]!=sub[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    void Partition(int index,string s,vector<string>&part,vector<vector<string>>&ans)
    {
        if(index==s.size())
        {
            ans.push_back(part);
            return ;
        }
        for(int end=index;end<s.size();end++)
        {
            if(ispalindrome(s,index,end))
            {
                part.push_back(s.substr(index,end-index+1));
                Partition(end+1,s,part,ans);
                part.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) 
    {
        vector<string>part;
        vector<vector<string>>ans;
        int index=0;
        Partition(index,s,part,ans);
        return ans;
    }
};