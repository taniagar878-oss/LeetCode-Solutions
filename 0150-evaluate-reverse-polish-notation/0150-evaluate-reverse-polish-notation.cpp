class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int>st;
        int n=tokens.size();
        for(int i=0; i<n; i++)
        {
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="/" || tokens[i]=="*")
            {
                int op2=st.top();
                st.pop();
                int op1=st.top();
                st.pop();
                int ans;
                if(tokens[i]=="+") ans=op1+op2;
                else if(tokens[i]=="-") ans=op1-op2;
                else if(tokens[i]=="/") ans=op1/op2;
                else ans=op1*op2;
                st.push(ans);
            }
            else
            {
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};