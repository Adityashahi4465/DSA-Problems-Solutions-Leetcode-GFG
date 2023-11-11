// https://leetcode.com/problems/design-graph-with-shortest-path-calculator/?envType=daily-question&envId=2023-11-11

class Graph {
public:
    map<int,vector<pair<int,int>>>adj;
    int n;
    Graph(int n, vector<vector<int>>& edges) {
        this->n=n;
        for(auto &x:edges){
            adj[x[0]].push_back({x[1],x[2]});
        }
    }
    
    void addEdge(vector<int> edge) {
        adj[edge[0]].push_back({edge[1],edge[2]});
    }
    
    int shortestPath(int node1, int node2) {
        vector<int>dist(this->n,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        dist[node1]=0;
        q.push({0,node1});
        while(!q.empty()){
            auto it=q.top(); q.pop();
            int node=it.second;
            int dis=it.first;
            for(auto x:adj[node]){
                int nbr=x.first,edgWt=x.second;
                if(dis+edgWt<dist[nbr]){
                    dist[nbr]=dis+edgWt;
                    q.push({dist[nbr],nbr});
                }
            }
        }
        
        return dist[node2]==INT_MAX?-1:dist[node2];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */
