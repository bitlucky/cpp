// count number of subarrays with given xor 


A Simple Solution is to use two loops to go through all possible 
subarrays of arr[] and count the number of subarrays having XOR of their elements as m.

// Simple function that returns count of subarrays 
// of arr with XOR value equals to m 
long long subarrayXor(int arr[], int n, int m) 
{ 
    long long ans = 0; // Initialize ans 
  
    // Pick starting point i of subarrays 
    for (int i = 0; i < n; i++) { 
        int xorSum = 0; // Store XOR of current subarray 
  
        // Pick ending point j of subarray for each i 
        for (int j = i; j < n; j++) { 
            // calculate xorSum 
            xorSum = xorSum ^ arr[j]; 
  
            // If xorSum is equal to given value, 
            // increase ans by 1. 
            if (xorSum == m) 
                ans++; 
        } 
    } 
    return ans; 
} 



