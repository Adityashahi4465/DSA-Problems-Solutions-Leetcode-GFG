// https://www.geeksforgeeks.org/problems/course-schedule/1


  bool topo(int i, vector<int>& vis, vector<vector<int>>& pre, vector<int>& ans){
        vis[i] = 2;
        
        for(int n : pre[i]){
            if(vis[n] == 2) return 0;
            if(vis[n] == 0){
                if(!topo(n,vis,pre,ans))return 0;
            }
        }
        vis[i] = 1;
        ans.push_back(i);
        
        return 1;
    }
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites) 
    {
        //topological sort
        vector<int> ans;
        
        vector<vector<int>> pre(n);
        
        for(int i=0;i<m;i++){
            pre[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        
        vector<int> vis(n,0);
        
        for(int i=0;i<n;i++){
            if(vis[i] == 0){
                topo(i,vis,pre,ans);
            }
        }
       if(ans.size() < n)return {};
        return ans;
    }
