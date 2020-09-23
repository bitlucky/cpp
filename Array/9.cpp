// Count possible triangles 

Algorithm:

    Run three nested loops each loop starting from the index of the previous 
    loop to end of array i.e run first loop from 0 to n, loop j from i to n and k from j to n.
    Check if array[i] + array[j] > array[k], array[i] + array[k] > array[j], array[k] + array[j] > array[i], 
    i.e. sum of two sides is greater than the third
    if all three conditions match, increase the count.
    Print the count


// Function to count all possible 
// triangles with arr[] elements 
int findNumberOfTriangles(int arr[], int n) 
{ 
    // Count of triangles 
    int count = 0; 
  
    // The three loops select three 
    // different values from array 
    for (int i = 0; i < n; i++) { 
        for (int j = i + 1; j < n; j++) { 
  
            // The innermost loop checks for 
            // the triangle property 
            for (int k = j + 1; k < n; k++) 
  
                // Sum of two sides is greater 
                // than the third 
                if ( 
                    arr[i] + arr[j] > arr[k] 
                    && arr[i] + arr[k] > arr[j] 
                    && arr[k] + arr[j] > arr[i]) 
                    count++; 
        } 
    } 
    return count; 
} 


Algorithm: Let a, b and c be three sides. The below condition must hold for a triangle (sum of two sides is greater than the third side)
i) a + b > c
ii) b + c > a
iii) a + c > b

Following are steps to count triangle.

    Sort the array in ascending order.
    Now run a nested loop. The outer loop runs from start to end and the innner loop runs from index + 1 
    of the first loop to the end. Take the loop counter of first loop as i and second loop as j. 
    Take another variable k = i + 2
    Now there is two pointers i and j, where array[i] and array[j] represents two sides of the triangles. 
    For a fixed i and j, find the count of third sides which will satisfy the conditions of a triangle. i.e 
    find the largest value of array[k] such that array[i] + array[j] > array[k]
    So when we get the largest value, then the count of third side is k – j, add it to the total count.
    Now sum up for all valid pairs of i and j where i < j

// Function to count all possible triangles with arr[] 
// elements 
int findNumberOfTriangles(int arr[], int n) 
{ 
    // Sort the array elements in non-decreasing order 
    qsort(arr, n, sizeof(arr[0]), comp); 
  
    // Initialize count of triangles 
    int count = 0; 
  
    // Fix the first element. We need to run till n-3 
    // as the other two elements are selected from 
    // arr[i+1...n-1] 
    for (int i = 0; i < n - 2; ++i) { 
        // Initialize index of the rightmost third 
        // element 
        int k = i + 2; 
  
        // Fix the second element 
        for (int j = i + 1; j < n; ++j) { 
            // Find the rightmost element which is 
            // smaller than the sum of two fixed elements 
            // The important thing to note here is, we 
            // use the previous value of k. If value of 
            // arr[i] + arr[j-1] was greater than arr[k], 
            // then arr[i] + arr[j] must be greater than k, 
            // because the array is sorted. 
            while (k < n && arr[i] + arr[j] > arr[k]) 
                ++k; 
  
            // Total number of possible triangles that can 
            // be formed with the two fixed elements is 
            // k - j - 1. The two fixed elements are arr[i] 
            // and arr[j]. All elements between arr[j+1]/ to 
            // arr[k-1] can form a triangle with arr[i] and arr[j]. 
            // One is subtracted from k because k is incremented 
            // one extra in above while loop. 
            // k will always be greater than j. If j becomes equal 
            // to k, then above loop will increment k, because arr[k] 
            // + arr[i] is always greater than arr[k] 
            if (k > j) 
                count += k - j - 1; 
        } 
    } 
  
    return count; 
} 