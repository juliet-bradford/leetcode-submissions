class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> solution;
        unordered_map<int, int> value_key_map;
        for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
            unordered_map<int, int>::iterator idx = value_key_map.find(target - *it);
            if (idx != value_key_map.end()) {
                solution.push_back(idx->second);
                solution.push_back(it - nums.begin());
                return solution;
            }
            else value_key_map.insert({*it, it - nums.begin()});            
        }

        return solution;
    }
};
