class Solution {
public:
    string originalDigits(string s) {
        unordered_map<char,int> count;
        for(int i=0; i<s.length(); i++){
            count[s[i]]++;
        }
        string ans = "";
        int count0 = count['z'];
        for(int i=0; i<count0; i++){
            ans=ans+'0';
            count['z']--;
            count['e']--;
            count['r']--;
            count['o']--;
        }
        int count2 = count['w'];
        for(int i=0; i<count2; i++){
            ans=ans+'2';
            count['t']--;
            count['w']--;
            count['o']--;
        }
        int count4 = count['u'];
        for(int i=0; i<count4; i++){
            ans=ans+'4';
            count['f']--;
            count['o']--;
            count['u']--;
            count['r']--;
        }
        int count6 = count['x'];
        for(int i=0; i<count6; i++){
            ans=ans+'6';
            count['s']--;
            count['i']--;
            count['x']--;
        }
        int count8 = count['g'];
        for(int i=0; i<count8; i++){
            ans=ans+'8';
            count['e']--;
            count['i']--;
            count['g']--;
            count['h']--;
            count['t']--;
        }
        int count1 = count['o'];
        for(int i=0; i<count1; i++){
            ans=ans+'1';
            count['o']--;
            count['n']--;
            count['e']--;
        }
        int count3 = count['h'];
        for(int i=0; i<count3; i++){
            ans=ans+'3';
            count['t']--;
            count['h']--;
            count['r']--;
            count['e']--;
            count['e']--;
        }
        int count5 = count['f'];
        for(int i=0; i<count5; i++){
            ans=ans+'5';
            count['f']--;
            count['i']--;
            count['v']--;
            count['v']--;
        }
        int count7 = count['s'];
        for(int i=0; i<count7; i++){
            ans=ans+'7';
            count['s']--;
            count['e']--;
            count['v']--;
            count['e']--;
            count['n']--;
        }
        int count9 = count['i'];
        for(int i=0; i<count9; i++){
            ans=ans+'9';
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
    
};