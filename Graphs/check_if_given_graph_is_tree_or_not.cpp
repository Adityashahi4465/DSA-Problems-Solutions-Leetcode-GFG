// https://www.geeksforgeeks.org/problems/is-it-a-tree/1

bool isCyclic(int src, int prt, vector<vector<int>>&Vec, vector<bool> &visited)
  {
      visited[src]=true;
      
      for(auto i: Vec[src]){
          if(!visited[i]){
          if(isCyclic(i,src, Vec, visited))
          
              return true;
          }
          else if(i != prt)
          {
              return true;
          }
      }
      return false;
  }
    int isTree(int n, int m, vector<vector<int>> &Vec) {
        // code here
        vector<bool> visited(n,false);
        
        int startingNode =0;
        if (isCyclic(startingNode, -1, Vec, visited)) return false;
    
    
    for(int u=0; u<n; u++){
        
        if(!visited[u])
        {
            return 0;
            
        }
        
        return 1;
    }

