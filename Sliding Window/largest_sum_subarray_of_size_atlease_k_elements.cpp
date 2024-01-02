// https://www.geeksforgeeks.org/problems/largest-sum-subarray-of-size-at-least-k3121/1

long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long int sum=0,i=0,s=-1,max=-1000000,last=0;
        while(i<n)
        {
            sum+=a[i];
           if(i>=k-1)
           {
                if(max<sum)
                max=sum;
                if(s!=-1)
                last+=a[s];
                if(last<0)
                {
                    sum-=last;
                    if(max<sum)
                    max=sum;
                    last=0;
                }
                s++;
           }
            i++;
        }
        return max;
    }

