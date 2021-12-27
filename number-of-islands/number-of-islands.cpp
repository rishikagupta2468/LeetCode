class Solution {
public:
    void dfs(vector<vector<char>>& grid,int i,int j){
        grid[i][j]='0';
        int n=grid.size();
        int m=grid[0].size();
        if(i-1>=0 && grid[i-1][j]=='1'){
            dfs(grid,i-1,j);
        }
        if(i+1<n && grid[i+1][j]=='1'){
            dfs(grid,i+1,j);
        }
        if(j-1>=0 && grid[i][j-1]=='1'){
            dfs(grid,i,j-1);
        }
        if(j+1<m && grid[i][j+1]=='1'){
            dfs(grid,i,j+1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){
                    ans++;
                    dfs(grid,i,j);
                }
            }
        }
        return ans;
    }
};