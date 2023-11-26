
// https://www.geeksforgeeks.org/problems/print-pattern3549/1
class Solution{
public:
     bool flag = false;
    void solve(int n, vector<int> &ans, int N){
        if(n == N){
            ans.push_back(n);
            return;
        }
        if(n <= 0) flag = true;
        
        if(flag == false){
            ans.push_back(n);    
            n = n-5;
            solve(n, ans, N);
        }
        else{
            ans.push_back(n);
            n = n+5;
            solve(n, ans, N);
        }
    
    }
    
    vector<int> pattern(int N){
        vector<int> ans;
        if(N <= 0){
            ans.push_back(N);
            return ans;
        } 
        ans.push_back(N);
        int M = N;
        N = N-5;
        
        solve(N, ans, M);
        
        return ans;
    }
