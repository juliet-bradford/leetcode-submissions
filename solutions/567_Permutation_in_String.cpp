class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        if (s2.length() < s1.length()) return false;
        
        int letters_s1[26], letters_s2[26], i;
        memset(letters_s1, 0, 26 * 4);
        memset(letters_s2, 0, 26 * 4);

        for (i = 0; i < s1.size(); ++i) {
            letters_s1[s1[i] - 'a']++;
            letters_s2[s2[i] - 'a']++;
        }

        if (equal(letters_s1, letters_s1 + 26, letters_s2)) 
                return true;

        for (i = s1.size(); i < s2.size(); ++i) {
            letters_s2[s2[i - s1.size()] - 'a']--;
            letters_s2[s2[i] - 'a']++;
            if (equal(letters_s1, letters_s1 + 26, letters_s2)) 
                return true;
        }
        return false;
    }
};
