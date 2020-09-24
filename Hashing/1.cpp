// Find whether an array is subset of another array | Added Method 3

Method 1 (Simple):
Use two loops: The outer loop picks all the elements of arr2[] one by one. 
The inner loop linearly searches for the element picked by the outer loop. 
If all elements are found then return 1, else return 0

/* Return 1 if arr2[] is a subset of  
arr1[] */
bool isSubset(int arr1[], int arr2[],  
                        int m, int n) 
{ 
    int i = 0; 
    int j = 0; 
    for (i = 0; i < n; i++) 
    { 
        for (j = 0; j < m; j++) 
        { 
            if(arr2[i] == arr1[j]) 
                break; 
        } 
          
        /* If the above inner loop was 
        not broken at all then arr2[i] 
        is not present in arr1[] */
        if (j == m) 
            return 0; 
    } 
      
    /* If we reach here then all 
    elements of arr2[] are present 
    in arr1[] */
    return 1; 
} 

Method 2 (Use Sorting and Binary Search):

    Sort arr1[] which takes O(mLogm)
    For each element of arr2[], do binary search for it in sorted arr1[].
    If the element is not found then return 0.
    If all elements are present then return 1.




  
/* Fucntion prototypes */
void quickSort(int *arr, int si, int ei); 
int binarySearch(int arr[], int low,  
                    int high, int x); 
  
/* Return 1 if arr2[] is a subset of arr1[] */
bool isSubset(int arr1[], int arr2[], 
                        int m, int n) 
{ 
    int i = 0; 
  
    quickSort(arr1, 0, m-1); 
    for (i=0; i<n; i++) 
    { 
        if (binarySearch(arr1, 0, m - 1, 
                        arr2[i]) == -1) 
        return 0; 
    } 
      
    /* If we reach here then all elements 
     of arr2[] are present in arr1[] */
    return 1; 
} 