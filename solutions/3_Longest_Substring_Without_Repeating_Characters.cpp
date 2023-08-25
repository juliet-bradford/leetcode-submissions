class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        /* start at the front, move back iterator
         * until repeat is detected. move front iterator
         * until repeat is gone
         * use set to determine repeats */
        
        if (s.length() == 0) return 0;

        uint solution = 1;
        string::iterator front = s.begin(), back = s.begin();
        ++back;
        unordered_set<char> present;
        present.insert(*front);
        while (back != s.end()) {
            while (present.count(*back) != 0) {
                present.erase(*front);
                ++front;
            }
            if (back - front + 1 > solution) solution = back - front + 1;
            present.insert(*back);
            ++back;
        }

        return solution;
    }
};
