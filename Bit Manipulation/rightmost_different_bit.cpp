// https://www.geeksforgeeks.org/problems/rightmost-different-bit-1587115621/1

int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        if(m == n) return -1; //edge case if both the numbers are same

        int no = m^n; //this part finds xor since this turns all different bits to 1 along with the right most different bits
        //Since we have a number "no" variable which has set bit for all the different bits of two numbers
        //We only need the right most set bit we multiply the "no" variable with its two's complement
       //note: a number's two's complement is its negative form
       //now we have the "(no & -no)" which has one and only set bit which is right most set bit of "no"
      //log2(x) returns the power value
      // we found the position
        return log2(no & -no) + 1;
    }
