class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> solution;

        uint i = 0, j = numbers.size() - 1;
        while (1) {
            if (numbers[i] + numbers[j] > target) --j;
            else if (numbers[i] + numbers[j] < target) ++i;
            else break;
        }
        solution.push_back(i+1);
        solution.push_back(j+1);
        return solution;
    }
};
