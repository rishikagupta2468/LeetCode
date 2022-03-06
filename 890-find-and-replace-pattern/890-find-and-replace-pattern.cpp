class Solution {
public:
    bool match(string word, string pattern) {
        if(word.length() != pattern.length()) {
            return false;
        }
        unordered_map<char, char> map;
        unordered_map<char, char> rmap;
        for(int i=0; i<word.length(); i++) {
            if(map.find(word[i]) == map.end()) {
                if(rmap.find(pattern[i]) == rmap.end()) {
                    map.insert(make_pair(word[i], pattern[i]));
                    rmap.insert(make_pair(pattern[i], word[i]));
                }
                else{
                    return false;
                }
            }
            else {
                if(map[word[i]] != pattern[i]) {
                    return false;
                }
            }
        }
        return true;
    }
    vector<string> findAndReplacePattern(vector<string>& input, string pattern) {
        vector<string> ans;
        for(int i=0; i<input.size(); i++){
            if(match(input[i], pattern)){
                ans.push_back(input[i]);
            }
        }
        return ans;
    }
};