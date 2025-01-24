class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        int x_or = 0;
        for(auto i : nums)
        {
            mpp[i]++;
        }
        for(auto i : mpp)
        {
            if(i.second == 2)
            {
                x_or = (x_or ^ i.first); 
            }
        }
        return x_or;
    }
};