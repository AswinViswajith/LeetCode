class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i : nums)
        {
            mpp[i]++;
            if(mpp[i] >=2)
            {
                return i;
            }
        }
        return {};
    }
};