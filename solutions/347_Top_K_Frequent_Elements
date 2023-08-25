class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        // make a hashmap where the sorted string is the key and all
        // matching anagrams are the values

        unordered_map<string, vector<string>> anagram_list;
        for (vector<string>::iterator it = strs.begin(); it != strs.end(); ++it) {
            string sorted_str = *it; 
            sort(sorted_str.begin(), sorted_str.end());
            unordered_map<string, vector<string>>::iterator anagrams = anagram_list.find(sorted_str);
            if (anagrams != anagram_list.end()) {
                anagrams->second.push_back(*it);
            }
            else {
                vector<string> vec;
                vec.push_back(*it);
                anagram_list.emplace(sorted_str, vec);
            }
        }

        vector<vector<string>> solution;
        for (unordered_map<string, vector<string>>::iterator hashmap = anagram_list.begin(); 
        hashmap != anagram_list.end(); 
        ++hashmap) {
            solution.push_back(hashmap->second);
        }

        return solution;
    }
};
