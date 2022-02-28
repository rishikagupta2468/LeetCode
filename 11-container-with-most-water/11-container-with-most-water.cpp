class Solution {
public:
    int maxArea(vector<int>& arr) {
        int ans = 0;
        int i = 0, j=arr.size() -1;
        while(i<j){
            int area = min(arr[i], arr[j])*(j-i);
            ans = max(ans, area);
            if(arr[i]<arr[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return ans;
    }
};