// https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1


 vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        bool travel_left=true;
        
        for(int i=0;i<n;i++)
        {
           if(travel_left){
           for(int j=0;j<m;j++)
           {
           ans.push_back(matrix[i][j]);
           }
           }
           else
           {
            for(int j=m-1;j>=0;j--)
           {
           ans.push_back(matrix[i][j]);
           }   
           }
           travel_left=!travel_left;
        }
        
        return ans;
    }
