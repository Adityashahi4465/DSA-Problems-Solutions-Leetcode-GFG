// https://www.geeksforgeeks.org/problems/game-with-string4100/1

int power( int n){
        return n*n ; 
    }
public:
    int minValue(string s, int k){
        // code here
        vector<int>freq(26,0);
        priority_queue<int> pq ; 
        // priority queue of frequency 
        
        for(auto i: s)
        freq[i-'a']++; 
        
        // now put the freq in pq
        for( auto elem : freq)
        if(elem != 0)
        pq.push(elem); 
        
        
        while( k--)
        {
            int maxi= pq.top(); 
            pq.pop(); 
            maxi-=1 ; 
            pq.push(maxi); 
        }
        
        int ans =0; 
        while(!pq.empty())
        {
            ans+= power(pq.top());
            pq.pop();
        }
        return ans; 
        
    }
