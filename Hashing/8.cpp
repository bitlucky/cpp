// 2 sum problem 

Given an array A[] and a number x, check for pair in A[] with sum as x

Method 1: Sorting and Two-Pointers technique.

// Function to check if array has 2 elements 
// whose sum is equal to the given value 
bool hasArrayTwoCandidates(int A[], int arr_size, 
                           int sum) 
{ 
    int l, r; 
  
    /* Sort the elements */
    sort(A, A + arr_size); 
  
    /* Now look for the two candidates in  
       the sorted array*/
    l = 0; 
    r = arr_size - 1; 
    while (l < r) { 
        if (A[l] + A[r] == sum) 
            return 1; 
        else if (A[l] + A[r] < sum) 
            l++; 
        else // A[i] + A[j] > sum 
            r--; 
    } 
    return 0; 
} 

Method 2 - Use Hash map 

unordered_set s
for(i=0 to end)
  if(s.find(target_sum - arr[i]) == s.end)
    insert(arr[i] into s)
  else 
    print arr[i], target-arr[i]


void printPairs(int arr[], int arr_size, int sum) 
{ 
    unordered_set<int> s; 
    for (int i = 0; i < arr_size; i++) { 
        int temp = sum - arr[i]; 
  
        if (s.find(temp) != s.end()) 
            cout << "Pair with given sum "
                 << sum << " is ( 
                           " << arr[i] << ", 
                "  
                    << temp << ")" << endl; 
  
        s.insert(arr[i]); 
    } 
} 
