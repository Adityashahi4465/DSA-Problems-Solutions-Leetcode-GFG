// https://www.geeksforgeeks.org/problems/transform-to-prime4635/1

bool isprime(int num){
        for(int i=2;i<num;i++){
            if(num%i==0)return false;
        }
        return true;
    }
    int minNumber(int arr[],int N)
    {   
        int sum=0;
        for(int i=0;i<N;i++) sum+=arr[i];
        if(sum==1) return 1;
        
        if(isprime(sum)) return 0;
        
        int k=1;
        while(!isprime(sum+k)){
            k++;
        }
        return k;
    }

