class Solution {
private:
    void dfs(int node, vector<int> adjLs[], vector<int>& vis){
        vis[node]=1;
        for(auto it : adjLs[node]){
            if(!vis[it]){
                dfs(it, adjLs, vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> adjLs[isConnected.size()];
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(isConnected[i][j] == 1 && i != j){
    adjLs[i].push_back(j);
}
            }
        }

        vector<int> vis(isConnected.size(), 0);
        int cnt=0;
        for(int i=0;i<isConnected.size();i++){
            if(vis[i]==0){
                cnt++;
                dfs(i, adjLs, vis);
            }
        }
        return cnt;
    }
};