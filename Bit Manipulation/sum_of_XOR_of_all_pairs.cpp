// https://practice.geeksforgeeks.org/problems/sum-of-xor-of-all-pairs0723/1

class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
        // good qn. to solve 
        long long int res=0;
        vector<int>o(32,0),z(32,0);
        for(int i=0 ; i<n ; i++){
            int num=arr[i];
            int t=0;
            while(num){
                if(num%2!=0){
                    o[t]++;
                }
                t++;
                num=num/2;
            }
        }
        for(int i=0 ; i<32 ; i++){
            long long int t=(long long int)(n-o[i])*o[i];
            res+=t*pow(2,i);
            
        }
        return res;
    }
};
