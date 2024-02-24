// https://www.geeksforgeeks.org/problems/maximum-sum-problem2211/1
int maxSum(int n)
        {
            //base case
            if(n==0 or n==1) return n;
            // the maximum result can be obtained, if we divide the number and the sum of the
            //new numbers is more than the given integer else we don't need to divide
            return max(n,maxSum(n/2)+maxSum(n/3)+maxSum(n/4));
        }
