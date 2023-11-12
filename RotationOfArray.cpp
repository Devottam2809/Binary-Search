int rotations(vector<int> nums) {
        int low = 0;
        int high = nums.size() - 1;
        int n = nums.size();

        if (nums[low] <= nums[high])
            return nums[low];

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int prev = (mid - 1 + n) % n;
            int next = (mid + 1) % n;

            if (nums[mid] <= nums[prev] && nums[mid] <= nums[next])
                return nums[mid];
            else if (nums[mid] <= nums[high])
                high = mid - 1;
            else if (nums[mid] >= nums[low])
                low = mid + 1;
        }
        return 0;
    }