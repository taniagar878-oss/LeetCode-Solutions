class Solution {
public:
    int calPoints(vector<string>& operations) 
    {
        stack<int>s;
        for(auto ch : operations)
        {
            if(ch=="+")
            {
                int op1=s.top();
                s.pop();
                int op2=s.top();
                s.push(op1);
                s.push(op1+op2);
            }
            else if(ch=="D")
            {
                int op1=s.top();
                op1*=2;
                s.push(op1);
            }
            else if(ch=="C") s.pop();
            else  s.push(stoi(ch));
        }
        int ans=0;
        while(!s.empty())
        {
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
};