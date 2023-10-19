// https://practice.geeksforgeeks.org/problems/level-of-nodes-1587115620/1
class Solution
{
	public:
	//Function to find the level of node X.
    int nodeLevel(int V, vector<int> adj[], int X) 
    {
        // code here
        vector<int>visit(V,0);
        int c;
        queue<pair<int,int>>q;
        q.push({0,0});
        visit[0]=1;
        while(!q.empty())
        {
            int frontnode=q.front().first;
            int level=q.front().second;
            if(frontnode==X)
            {
                return level;
            }
            q.pop();
            for(auto it:adj[frontnode])
            {
                 if(!visit[it])
                 {
                     q.push({it,level+1});
                     visit[it]=1;
                     
                 }
                 
            }
            
            
        }
        return -1;
    }
};
