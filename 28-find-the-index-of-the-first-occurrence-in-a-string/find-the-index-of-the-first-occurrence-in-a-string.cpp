class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1 = haystack.length(),
        n2 = needle.length();
        for(int i=0;i<=n1-n2;i++)
        {
            if(haystack.substr(i,n2) == needle)
            {
                return i;
            }
        }
        return -1;
    }
};