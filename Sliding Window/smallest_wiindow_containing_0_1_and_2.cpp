// https://www.geeksforgeeks.org/problems/smallest-window-containing-0-1-and-2--170637/1

class Solution {
  public:
    int smallestSubstring(string S) {
        int res=INT_MAX;
        int n=S.length();
        int i=0, j=0;
        int zeroCount=0, oneCount=0, twoCount=0;
        while(i<n){
            S[i]=='0' ? zeroCount++ : (S[i]=='1' ? oneCount++ : twoCount++);
            while(zeroCount && oneCount && twoCount){
                res=min(res, i-j+1);
                S[j]=='0' ? zeroCount-- : (S[j]=='1' ? oneCount-- : twoCount--);
                j++;
            }
            i++;
        }
        return res==INT_MAX ? -1 : res ;
    }
};
