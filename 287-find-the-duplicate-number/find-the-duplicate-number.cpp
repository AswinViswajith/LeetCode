class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i : nums)
        {
            mpp[i]++;
        }
        for(auto i : mpp)
        {
            if(i.second >= 2)
            {
                return i.first;
            }
        }
        return {};
    }
};