//Second largest in array 

// Simple Solution 
// Approach: The idea is to sort the array in descending order and 
// then return the second element which is not equal to largest element from the sorted array.


void print2largest(int arr[], int arr_size) 
{ 
    int i, first, second; 
  
    /* There should be atleast two elements */
    if (arr_size < 2) { 
        printf(" Invalid Input "); 
        return; 
    } 
  
    // sort the array 
    sort(arr, arr + arr_size); 
  
    // start from second last element 
    // as the largest element is at last 
    for (i = arr_size - 2; i >= 0; i--) { 
        // if the element is not 
        // equal to largest element 
        if (arr[i] != arr[arr_size - 1]) { 
            printf("The second largest element is %d\n", arr[i]); 
            return; 
        } 
    } 
  
    printf("There is no second largest element\n"); 
} 


// Better Solution: 
// Approach: The approach is to traverse the array twice. In the first traversal find the maximum element. 
// n the second traversal find the greatest element less than the element obtained in first traversal.


void print2largest(int arr[], int arr_size) 
{ 
    int i, first, second; 
  
    /* There should be atleast two elements */
    if (arr_size < 2) { 
        printf(" Invalid Input "); 
        return; 
    } 
  
    int largest = second = INT_MIN; 
  
    // find the largest element 
    for (int i = 0; i < arr_size; i++) { 
        largest = max(largest, arr[i]); 
    } 
  
    // find the second largest element 
    for (int i = 0; i < arr_size; i++) { 
        if (arr[i] != largest) 
            second = max(second, arr[i]); 
    } 
    if (second == INT_MIN) 
        printf("There is no second largest element\n"); 
    else
        printf("The second largest element is %d\n", second); 
} 
