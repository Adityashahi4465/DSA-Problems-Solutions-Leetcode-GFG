
// https://www.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1
string removeDuplicates(string str) {
        vector<int>hash1(26,0);
        vector<int>hash2(26,0);
        string ans;
        for(int i=0;i<str.length();i++){
            if(str[i]>=97 && str[i]<=122){
                if(hash1[str[i]-'a']==0){
                    ans.push_back(str[i]);
                    hash1[str[i]-'a']++;
                    
                }
            }
                else if(str[i]>=65 && str[i]<=90){
                        if(hash2[str[i]-'A']==0){
                            ans.push_back(str[i]);
                            hash2[str[i]-'A']++;
                        }
                }
            }
        return ans;
    
	}
