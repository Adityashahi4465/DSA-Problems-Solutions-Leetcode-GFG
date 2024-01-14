// https://www.geeksforgeeks.org/problems/find-duplicate-rows-in-a-binary-matrix/1
 vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
       vector<vector<int>> v;
        vector<int> ans;
        for(int r=0;r<M;r++){
            vector<int> cur(matrix[r].begin(), matrix[r].end());
            if(find(v.begin(), v.end(), cur) == v.end()){
                v.push_back(cur);
            } 
            else{
                ans.push_back(r);
            }
        }
        
        return ans;
      
    } 
