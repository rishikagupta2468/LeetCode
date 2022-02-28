class Solution {
public:
    int longestPalindrome(string s) {
    int ans =0;
    unordered_map<char, int> count;
    for(int i=0; i<s.length(); i++){
        count[s[i]]++;
    }
    for(auto i=count.begin(); i!=count.end() ; i++){
        if(i->second%2 == 0){
            ans+=(i->second);
        }
        else{
            ans+=(i->second/2)*2;
            if(ans%2 == 0){
                ans++;
            }
        }
    }
    return ans;
    }
};