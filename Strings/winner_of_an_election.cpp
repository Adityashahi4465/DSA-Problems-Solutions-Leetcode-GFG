// https://www.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/1

vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        vector<string>v;
        string s;
        int max=0;
       
        unordered_map<string,int>mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto i: mp) {
          if (i.second > max || (i.second == max && i.first < s)) {
              max = i.second;
                  s = i.first;
              }
          }
          v.push_back(s);
          v.push_back(to_string(max));
          return v;
    }
