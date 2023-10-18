// https://practice.geeksforgeeks.org/problems/eventual-safe-states/1
class Solution {
  public:
 bool detectCycle(int vertex,vector<int> adj[],vector<bool>&vis,vector<bool>&order,vector<int>&ans){
        order[vertex]=true;
        if(!vis[vertex]){
            vis[vertex]=true;
            for(auto x: adj[vertex]){
                if(!vis[x]&&detectCycle(x,adj,vis,order,ans))return true;
                else if(order[x])return true;
            }
        }
        order[vertex]=false;
        ans.push_back(vertex);
        return false;
    }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<int>ans;
        vector<bool>vis(V,false);
        vector<bool>order(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i])detectCycle(i,adj,vis,order,ans);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
