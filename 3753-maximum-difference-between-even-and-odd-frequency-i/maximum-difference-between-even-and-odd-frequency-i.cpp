class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mpp;
        for(char ch : s)
        {
            mpp[ch]++;
        }
        int even_min = INT_MAX,odd_max = INT_MIN;
        for(auto i : mpp)
        {
            if(i.second % 2==0)
            {
                even_min = min(even_min,i.second);
            }
            else{
                odd_max = max(odd_max,i.second);
            }
        }
        return odd_max - even_min;
    }
};