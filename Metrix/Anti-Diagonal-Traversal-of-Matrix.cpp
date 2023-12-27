// https://www.geeksforgeeks.org/problems/print-diagonally1623/1

 vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        int n = matrix.size();
        vector<int> ans;
        for(int t=0; t<n; t++)
        {
            int j = t;
            int i = 0;
            while(j>=0)
            {
                ans.push_back(matrix[i++][j--]);
            }
        }
        
        for(int t=1; t<n; t++)
        {
            int i = t;
            int j = n-1;
            while(i<n)
            {
                ans.push_back(matrix[i++][j--]);
            }
        }
        
        return ans;
    }
