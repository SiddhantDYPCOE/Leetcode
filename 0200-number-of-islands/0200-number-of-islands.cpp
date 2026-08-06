class Solution {
void dfs(int row, int col, vector<vector<int>>& vis,vector<vector<char>>& grid){
    int drow[]={-1,0,1,0};
    int dcol[]={0,1,0,-1};
    int n=grid.size();
    int m=grid[0].size();
    vis[row][col]=1;
    for(int i=0;i<4;i++){
        int nrow=row+drow[i];
        int ncol=col+dcol[i];
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && vis[nrow][ncol]==0 && grid[nrow][ncol]=='1'){
            dfs(nrow, ncol, vis, grid);
        }
    }
}
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m= grid[0].size();
        int cnt=0;
        vector<vector<int>> vis(n, vector(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    cnt++;
                    dfs(i, j,vis, grid);
                }
            }
        }
        return cnt;
    }
};