// https://www.geeksforgeeks.org/problems/pangram-checking-1587115620/1

bool checkPangram (string s) {
        // your code here
        set<char> ans;
        for(int i=0;i<s.length();i++)
        {
            s[i] = tolower(s[i]);
            if(s[i]>='a' && s[i]<='z')
            {
               ans.insert(s[i]);
            }
            else continue;
        }
        return ans.size()==26;
    }
