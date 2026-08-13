class Solution {
public:
    bool isVowel(char ch)
    {
        char c=tolower(ch);
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
        else return false;
    }
    string reverseVowels(string s) 
    {
        int n=s.size();
        int l=0, r=n-1;
        while(l<r)
        {
            while(l<r && !isVowel(s[l])) l++;
            while(l<r && !isVowel(s[r])) r--;
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            l++;
            r--;
        }
        return s;
    }
};