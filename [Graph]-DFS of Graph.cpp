// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

class Solution {
  public:
    void dfs(int node, vector<int> adj[], int vis[], vector<int> &res) {
        vis[node] = 1;
        res.push_back(node);
        
        for(auto it: adj[node]) {
            if(!vis[it]) {
                dfs(it, adj, vis, res);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> res;
        int vis[V] = {0};
        int start = 0;
        dfs(start, adj, vis, res);
        return res;
    }
};