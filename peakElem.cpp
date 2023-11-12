// finding peak element in array is similar to finding maximum element in bitonic array

class Solution {
private:
    int searchPeak(vector<int>& nums, int n) {
        int low = 0;
        int high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;

            if (mid > 0 && mid < n - 1) {
                if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
                    return mid;
                else if (nums[mid - 1] > nums[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            } else if (mid == 0) {
                if (nums[0] > nums[1])
                    return 0;
                else
                    return 1;
            } else if (mid == n - 1) {
                if (nums[n - 1] > nums[n - 2])
                    return n - 1;
                else
                    return n - 2;
            }
        }
        return -1;
    }

public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() == 1)
            return 0; 

        return searchPeak(nums, nums.size());
    }
};





