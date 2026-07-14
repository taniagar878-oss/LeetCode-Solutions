class Solution {
public:
void solve(string cur,int open,int close,int n,vector<string>&ans)
{
    if(cur.size()==2*n) 
    {
        ans.push_back(cur);
        return;
    }
    if(open<n)
    {
        solve(cur+"(",open+1,close,n,ans);
    }
    if(close<open)
    {
        solve(cur+")",open,close+1,n,ans);
    }
}
vector<string> generateParenthesis(int n) 
    {
       vector<string>ans;
       solve("",0,0,n,ans);
       return ans; 
    }
};