
// https://leetcode.com/problems/frequency-of-the-most-frequent-element/editorial/?envType=daily-question&envId=2023-11-18
class Solution {
public:
        int maxFrequency(vector<int>& A, long k) {
        int i = 0, j;
        sort(A.begin(), A.end());
        for (j = 0; j < A.size(); ++j) {
            k += A[j];
            if (k < (long)A[j] * (j - i + 1))
                k -= A[i++];
        }
        return j - i;
    }
};
