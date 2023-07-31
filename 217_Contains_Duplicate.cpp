class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        vector<int> nums_copy = nums;
        sort(nums_copy.begin(), nums_copy.end());
        for (vector<int>::iterator it = nums_copy.begin(); 
            it != nums_copy.end() - 1; 
            ++it) {
            
            if (*it == *(it + 1)) return true;
        }
        return false;
    }
};
