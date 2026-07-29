class Solution {
public:
    void ValidParenthesis(int n,int open,int close,string &part,vector<string>&ans)
    {
        if(part.size()==2*n)
        {
            ans.push_back(part);
            return;
        }
        if(open<n)
        {
            part+='(';
            ValidParenthesis(n,open+1,close,part,ans);
            part.pop_back();
        }
        if(close<open)
        {
            part+=')';
            ValidParenthesis(n,open,close+1,part,ans);
            part.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string>ans;
        string part="";
        int open=0,close=0;
        ValidParenthesis(n,open,close,part,ans);
        return ans;
    }
};