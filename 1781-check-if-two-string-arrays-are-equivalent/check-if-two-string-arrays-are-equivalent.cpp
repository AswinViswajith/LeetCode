class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = "",s2="";
        int n1 = word1.size(),n2 = word2.size();
        for(int i=0;i<n1;i++)
        {
            string s = word1[i];
            for(int j =0;j<s.length();j++)
            {
                s1 += s[j];
            }
        }
        for(int i=0;i<n2;i++)
        {
            string s = word2[i];
            for(int j =0;j<s.length();j++)
            {
                s2 += s[j];
            }
        }
        if(s1.length() != s2.length())
        {
            return false;
        }
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i] != s2[i])
            {
                return false;
            }
        }
        return true;
    }
};