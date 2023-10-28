// https://practice.geeksforgeeks.org/problems/bleak-numbers1552/1

int countBits(int n) {
        int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    
    int is_bleak(int n) {
        int limit = (n > 32) ? n - 32 : 1;
    
        for (int x = limit; x <= n; ++x) {
            if (x + countBits(x) == n)
                return 0;
        }
    
        return 1;
    }
