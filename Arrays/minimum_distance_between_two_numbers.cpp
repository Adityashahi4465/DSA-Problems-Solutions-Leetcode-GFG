// https://www.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1

int minDist(int a[], int n, int x, int y) {
    int idx1 = -1, idx2 = -1;
    int res = 1e6;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            if (idx2 != -1) {
                res = min(res, abs(i - idx2));
            }
            idx1 = i;
        } else if (a[i] == y) {
            if (idx1 != -1) {
                res = min(res, abs(i - idx1));
            }
            idx2 = i;
        }
    }

    return res == 1e6 ? -1 : res;
}
