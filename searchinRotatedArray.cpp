class Solution {
private:
    int minElement(vector<int> nums) {
        int low = 0;
        int high = nums.size() - 1;
        int n = nums.size();

        if (nums[low] <= nums[high])
            return low;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int prev = (mid - 1 + n) % n;
            int next = (mid + 1) % n;

            if (nums[mid] <= nums[prev] && nums[mid] <= nums[next] && nums[mid] <= nums[low])
                return mid;
            else if (nums[mid] <= nums[high])
                high = mid - 1;
            else if (nums[mid] >= nums[low])
                low = mid + 1;
        }
        return -1;  
    }

    int binarySearch(vector<int> &nums, int low, int high, int target) {
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                low = mid + 1;
            else if (nums[mid] > target)
                high = mid - 1;
        }
        return -1;
    }

public:
    int search(vector<int> &nums, int target) {
        int pivot = minElement(nums);
        int result1 = binarySearch(nums, 0, pivot - 1, target);
        int result2 = binarySearch(nums, pivot, nums.size() - 1, target);

        if (result1 != -1)
            return result1;
        else if (result2 != -1)
            return result2;

        return -1;
    }
};
