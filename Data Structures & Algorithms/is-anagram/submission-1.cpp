class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> seen;

        if(s.size() != t.size()) return false;
        for(char c: s){
            seen[c]++;
        }

        for(char c: t){
            if(seen[c] == 0){
                return false;
            }

            seen[c]--;
        }

        return true;
    }
};
