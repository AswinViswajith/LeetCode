class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        for(int i=0;i<n;i++)
        {
            int temp = nums[i];
            int digits = 0;
            while(temp > 0)
            {
                digits += 1;
                temp /= 10;
            }
            if(digits%2==0)
            {
                count += 1;
            }
        }
        return count;
    }
};