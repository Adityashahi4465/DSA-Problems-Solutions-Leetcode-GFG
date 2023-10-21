// https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
class Solution
{
public:
    long long sumOfDivisors(int n)
    {
        // Write Your Code here
        long long ans=0;
        for(int i=1;i<=n;i++)
            ans=ans+i*(n/i);
        return ans;
    }
};
