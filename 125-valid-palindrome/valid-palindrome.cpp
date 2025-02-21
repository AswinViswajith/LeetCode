class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string res="";
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))
            {
                res+=tolower(s[i]);
            }
        }
        int i = 0,j=res.length()-1;
        while(i<j)
        {
            if(res[i]!=res[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};