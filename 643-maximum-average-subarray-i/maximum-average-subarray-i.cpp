class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        
        // Compute the sum of the first 'k' elements
        double sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        // Initialize max average
        double maxAvg = sum / k;

        // Slide the window across the array
        for (int i = k; i < n; i++) {
            sum += nums[i];      // Add new element to the window
            sum -= nums[i - k];  // Remove element that goes out of the window
            maxAvg = max(maxAvg, sum / k);  // Update max average
        }

        return maxAvg;
    }
};