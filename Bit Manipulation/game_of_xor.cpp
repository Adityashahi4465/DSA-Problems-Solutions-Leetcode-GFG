// https://www.geeksforgeeks.org/problems/game-of-xor1541/1

int gameOfXor(int N , int A[]) {
        // code here
        int cur=0;
        if(N&1){
            for(int i=0;i<N;i++){
                if((i%2) == 0){
                    cur = cur^A[i];
                }
            }
        }
        return cur;
 }
