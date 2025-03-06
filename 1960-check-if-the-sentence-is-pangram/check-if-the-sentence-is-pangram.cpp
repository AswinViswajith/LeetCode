class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mpp;
        for(char s : sentence)
        {
            mpp[s]++;
        }
        if(mpp.size() == 26)
        {
            return true;
        }
        return false;
    }
};