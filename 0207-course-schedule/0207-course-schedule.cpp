class Solution {
private:
    bool check(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& dfsVis){
        vis[node]=1;
        dfsVis[node]=1;

        for(auto it : adj[node]){
            if(!vis[it]){
                if(check(it, adj, vis, dfsVis)) return true;
            }else if (dfsVis[it]) {
                return true;
            }
        }
        dfsVis[node]=0;
        return false;
    }
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> vis(numCourses, 0);
        vector<int> dfsVis(numCourses, 0);

        vector<vector<int>> adj(numCourses);
        for (auto it : prerequisites) {
            int course = it[0];
            int prerequisite = it[1];

            adj[prerequisite].push_back(course);
        }


        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(check(i, adj, vis, dfsVis)){
                    return false;
                }
            }
        }
        return true;
    }
};