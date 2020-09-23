// Rotate Array

rotate(arr[], d, n)
  reverse(arr[], 1, d) ;
  reverse(arr[], d + 1, n);
  reverse(arr[], 1, n);

/*Function to reverse arr[] from index start to end*/
void rvereseArray(int arr[], int start, int end) 
{ 
    while (start < end) { 
        int temp = arr[start]; 
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    } 
} 
  
/* Function to left rotate arr[] of size n by d */
void leftRotate(int arr[], int d, int n) 
{ 
    if (d == 0) 
        return; 
    rvereseArray(arr, 0, d - 1); 
    rvereseArray(arr, d, n - 1); 
    rvereseArray(arr, 0, n - 1); 
} 