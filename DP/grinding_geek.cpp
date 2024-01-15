
// https://www.geeksforgeeks.org/problems/grinding-geek/1
  int helper(int i,int total , vector<int>&cost ,int &n,vector<vector<int>>&dp){
        if(i>=n)return 0;
        int p=0,np=0;
        if(dp[total][i]!=-1){
            return dp[total][i];
        }
        np=helper(i+1,total,cost,n,dp);
        if(total>=cost[i]){
            int c=total-cost[i];
            int t=floor(0.9*(float)cost[i]);
            c+=t;
            p=1+helper(i+1,c,cost,n,dp);
        }
        return dp[total][i]=max(p,np);
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        // basically it's a dp question;
        vector<vector<int>>dp(total+1,vector<int>(n+1,-1));
        return helper(0,total,cost,n,dp);
    }
