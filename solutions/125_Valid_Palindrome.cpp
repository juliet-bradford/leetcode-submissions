class Solution {
public:
    bool isPalindrome(string s) {
        
        string::iterator it = s.begin();
        string::reverse_iterator rit = s.rbegin();
        
        while (1) {
            while (it != s.end() && !isalnum(*it)) ++it;
            while (rit != s.rend() && !isalnum(*rit)) ++rit;
            if (it == s.end() && rit == s.rend()) return true;
            if (tolower(*it) != tolower(*rit)) return false;
            ++it; ++rit;
        }

        return true;
    }
};
