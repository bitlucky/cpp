// Longest subarray with sum 0

 Algorithm:

    Consider all sub-arrays one by one and check the sum of every sub-array.
    Run two loops: the outer loop picks the starting point i and the inner loop tries 
    all sub-arrays starting from i.


// Returns length of the largest subarray with 0 sum 
int maxLen(int arr[], int n) 
{ 
    int max_len = 0; // Initialize result 
  
    // Pick a starting point 
    for (int i = 0; i < n; i++) { 
        // Initialize currr_sum for every starting point 
        int curr_sum = 0; 
  
        // try all subarrays starting with 'i' 
        for (int j = i; j < n; j++) { 
            curr_sum += arr[j]; 
  
            // If curr_sum becomes 0, then update max_len 
            // if required 
            if (curr_sum == 0) 
                max_len = max(max_len, j - i + 1); 
        } 
    } 
    return max_len; 
} 


Algorithm:

    Create a extra space, an array of length n (prefix), a variable (sum) , length (max_len) 
    and a hash map (hm) to store sum-index pair as a key-value pair
    Move along the input array from starting to the end
    For every index update the value of sum = sum + array[i]
    Check for every index, if the current sum is present in the hash map or not
    If present update the value of max_len to maximum of difference of two indices (current 
    index and index in the hash-map) and max_len
    Else Put the value (sum) in the hash map, with the index as a key-value pair.
    Print the maximum length (max_len)

Below is a dry run of the above approach: 

// Returns Length of the required subarray 
int maxLen(int arr[], int n) 
{ 
    // Map to store the previous sums 
    unordered_map<int, int> presum; 
  
    int sum = 0; // Initialize the sum of elements 
    int max_len = 0; // Initialize result 
  
    // Traverse through the given array 
    for (int i = 0; i < n; i++) { 
        // Add current element to sum 
        sum += arr[i]; 
  
        if (arr[i] == 0 && max_len == 0) 
            max_len = 1; 
        if (sum == 0) 
            max_len = i + 1; 
  
        // Look for this sum in Hash table 
        if (presum.find(sum) != presum.end()) { 
            // If this sum is seen before, then update max_len 
            max_len = max(max_len, i - presum[sum]); 
        } 
        else { 
            // Else insert this sum with index in hash table 
            presum[sum] = i; 
        } 
    } 
  
    return max_len; 
} 