// https://www.geeksforgeeks.org/problems/need-some-change/1

 void swapElements(int arr[], int n)
    {
        
        // Your code here
         int i = 0;
       while(i<n-2)
       {
           int temp = arr[i];
           arr[i] = arr[i+2];
           arr[i+2] = temp;
           i++;
       }
    }
