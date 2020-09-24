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



Method 3 

Efficient Approach: Create a map to store the frequency of each distinct number present in A[]. 
Then we will check if each number of B[] is present in map or not. If present in the map, we will 
decrement the frequency value for that number by one and check for the next number. If map value for 
any number becomes zero, we will erase it from the map. If any number of B[] is not found in the map, 
we will set the flag value and break the loops and print No. Otherwise, we will print Yes.


// Function to check if an array is 
// subset of another array 
  
int isSubset(int a[], int b[], int m, int n) 
{ 
  
    // map to store the values of array a[] 
    map<int, int> mp1; 
  
    for (int i = 0; i < m; i++) 
        mp1[a[i]]++; 
  
    // flag value 
    int f = 0; 
  
    for (int i = 0; i < n; i++) { 
        // if b[i] is not present in map 
        // then array b[] can not be a 
        // subset of array a[] 
  
        if (mp1.find(b[i]) == mp1.end()) { 
            f = 1; 
            break; 
        } 
  
        // if if b[i] is present in map 
        // decrement by one 
        else { 
            mp1[b[i]]--; 
  
            if (mp1[b[i]] == 0) 
                mp1.erase(mp1.find(b[i])); 
        } 
    } 
  
    return f; 
} 