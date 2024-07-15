// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> bfs;
        queue<int> q;
        vector<int> vis(V);
        vis[0] = 1;
        q.push(0);
        
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            bfs.push_back(node);
            
            for(auto it : adj[node]) {
                if(vis[it] != 1) {
                    q.push(it);
                    vis[it] = 1;
                }
            }
        }
        
        return bfs;
    }
};