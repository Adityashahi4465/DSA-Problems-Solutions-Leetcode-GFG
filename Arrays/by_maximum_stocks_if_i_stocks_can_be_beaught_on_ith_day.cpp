
// https://www.geeksforgeeks.org/problems/buy-maximum-stocks-if-i-stocks-can-be-bought-on-i-th-day/1
int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        
        multimap<int, int> mp;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            mp.insert({price[i], i + 1}); 
        }
        
        for (auto it : mp) {
            if (k >= it.first) {
                if (k / it.first <= it.second) {
                    ans += k / it.first;
                    k = k % it.first;
                }
                else {
                    ans += it.second;
                    k -= it.first * it.second;
                }
            }
            else {
                break;
            }
        }
        
        return ans;
    }
