class Solution {
public:
    int findMin(vector<int>& nums) {

        if (nums.size() == 1) return nums[0];

        int low = 0, high = nums.size() - 1, mid, solution = 5001;
        while (nums[low] > nums[high]) {
            mid = low + (high - low) / 2;

            if (nums[mid] < solution) solution = nums[mid];

            if (nums[low] <= nums[mid]) low = mid + 1;
            else high = mid - 1;

        }

        return min(solution, nums[low]);
    }
};
