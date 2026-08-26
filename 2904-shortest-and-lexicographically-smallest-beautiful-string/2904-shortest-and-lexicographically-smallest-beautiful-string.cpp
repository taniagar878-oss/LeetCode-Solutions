class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) 
    {
        int n=s.size();
        int count=0;
        string val="";
        
        for(int i=0,e=0; i<n && e<n; e++)
        {
            if(s[e]=='1') count++;
            
            while(i<n && count>k)
            {
                if(s[i]=='1') count--;
                i++;
            }

            if(count==k)
            {
                int start=i;
                while(start<e && s[start]=='0') start++;
                string num=s.substr(start,e-start+1);

                if(val=="" || num.size()<val.size() || num.size()==val.size() && num<val)
                {
                    val=num;
                }
            }
        }
        return val;
    }
};