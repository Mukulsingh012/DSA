class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        unordered_map<int, vector<int>> adj;

        for(vector<int>& vec : edges){

            int v = vec[1];
            int u = vec[0];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool> visited(n, false);
        
        return DFS(adj, source, destination, visited);
    }

    bool DFS(unordered_map<int, vector<int>>& adj, int source, int destination, vector<bool>& visited){

        if(source == destination){
            return true;
        }
        if(visited[source] == true){
            return false;
        }

        visited[source] = true;

        for(auto &V : adj[source]){
            
            if(!visited[V]){
                if( DFS(adj, V, destination, visited)){
                    return true;
                }
            }
        }

        return false;
    }
};