class Solution {
public:
    int findLucky(vector<int>& arr) {
        int max = -1;
        int n = arr.size();
        unordered_map<int,int>mpp;
        for(auto i : arr)
        {
            mpp[i]++;
        }
        for(auto i : mpp)
        {
            if(i.first == i.second)
            {
                if(i.first > max)
                {
                    max = i.first;
                }
            }
        }
        return max;
    }
};