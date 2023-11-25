// https://www.geeksforgeeks.org/problems/shuffle-integers2401/1
void shuffleArray(int a[],int n)	{
    int maxval = 1e4;
    for(int i=2, j=1; i<n; i+=2, j++) 
        a[i] = (a[j] % maxval) * maxval + a[i];
    for(int i=1, j=n/2; i<n; i+=2, j++)
        a[i] = (a[j] % maxval) * maxval + a[i];
    for(int i=1;i<n;i++)
        a[i] = a[i] / maxval;
}
