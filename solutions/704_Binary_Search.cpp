class Solution {
public:
    int search(vector<int>& nums, int target) {
        int jump = nums.size() / 2, index = nums.size() / 2;
        while (jump > 1) {
            jump = (jump + 1) / 2;
            if (nums[index] == target) return index;
            else if (nums[index] < target) index += jump;
            else index -= jump;
        }

        if (nums[index] == target) return index;
        else if (index != 0 && nums[index - 1] == target) return index - 1;
        else if (index != nums.size() - 1 && nums[index + 1] == target) return index + 1;

        return -1;
    }
};
