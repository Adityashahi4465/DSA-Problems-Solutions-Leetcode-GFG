// https://www.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1

 bool subArrayExists(int arr[], int n)
    {
        map<int,int>mp;
        int prefix_sum = 0;
        
        for(int i = 0; i < n; i++){
            prefix_sum += arr[i];
            
            if(prefix_sum == 0 || mp.find(prefix_sum) != mp.end()){
                return true;
            }
            mp[prefix_sum]++;
        }
        return false;
    }
