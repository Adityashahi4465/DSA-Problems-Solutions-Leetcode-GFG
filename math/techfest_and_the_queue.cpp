// https://www.geeksforgeeks.org/problems/techfest-and-the-queue1044/1

int helper(int num,vector<int> &count){
        if(num==1) return 0;
        if(count[num]!=-1) return count[num];
        int ans=0;
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                int temp=num/i;
                ans=1+helper(temp,count);
                count[num]=ans;
                return ans;
            }
        }
        return 1;
    }
    int sumOfPowers(int a, int b){
        // Code here
        int ans=0;
        vector<int> count(b+1,-1);
        for(int num=b;num>=a;num--){
            if(count[num]==-1){
                ans+=helper(num,count);
            }
            else ans+=count[num];
        }
        return ans;
    }
