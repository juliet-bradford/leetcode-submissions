class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // never seen a Floyd's alogorithm problems before
        // so had to look this one up

        uint slow = 0, fast = 0;

        do {
            slow = nums[slow];
            fast = nums[fast];
            fast = nums[fast];
        } while (nums[slow] != nums[fast]);

        // now is floyd pointer
        fast = 0;
        while (nums[slow] != nums[fast]) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return nums[slow];
    }
};
