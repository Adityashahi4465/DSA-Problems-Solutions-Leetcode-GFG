// https://leetcode.com/problems/power-of-four/description/?envType=daily-question&envId=2023-10-23

class Solution {
public:
    bool isPowerOfFour(int n) {
        // if(n<0)return false;
        // for(int i=0;i<32;i+=2)if(n==1<<i)return true;
        // return false;

		// n>0, n should be positive
		// n&(n-1) ensure it is power of 2
		// 5 is "0101" so n&0x55555... ensure that set bit is at the even position.
		// soo if n is power of 2 and set bit is at even position -> n is power of 4
        return n>0 && (n&(n-1))==0 && (n&0x55555555);
    }
};
