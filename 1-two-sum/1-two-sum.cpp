class Solution {
public:
    vector<int> twoSum(vector<int>& input, int target) {
        vector<int> ans;
        unordered_map<int, int> present;
        for(int i=0; i<input.size(); i++){
           if(present.find(input[i]) != present.end()) {
                if(target - input[i] == input[i]){
                    ans.push_back(i);
                    ans.push_back(present[target- input[i]]);
                    return ans;
                }
            }
            present.insert(make_pair(input[i], i));
        }
        for(int i=0; i<input.size(); i++){
            if(present.find(target- input[i]) != present.end()) {
                if(present[target- input[i]] != i) {
                    ans.push_back(i);
                    ans.push_back(present[target- input[i]]);
                    return ans;
                }
            }
        }
        return ans;
        
    }
};