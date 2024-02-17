// https://www.geeksforgeeks.org/problems/does-array-represent-heap4345/1

  int parent(int i)
    {
        return (i-1)/2;
    }
    bool isMaxHeap(int a[], int n)
    {
        // Your code goes here
        for(int j=n-1;j>0;j--)
        {
            if(a[j]>a[parent(j)])
            return false;
        }
        return true;
    }
