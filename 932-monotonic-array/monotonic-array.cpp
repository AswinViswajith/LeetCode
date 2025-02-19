class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        int asc=0,des=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] <= nums[i+1])
            {
                asc += 1;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] >= nums[i+1])
            {
                des += 1;
            }
        }
        if(asc == n-1 || des == n-1)
        {
            return true;
        }
        return false;
    }
};