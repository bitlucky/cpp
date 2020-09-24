// First element occuring k times

Simple Approach: By using two loops, count the number of times a number appears in the array.

Efficient Approach: Use unordered_map for hashing as range is not known. Steps:

    Traverse the array elements from left to right.
    While traversing increment their count in the hash table.
    Again traverse the array from left to right and check which element has a count equal to k. 
    Print that element and stop.
    If no element has a count equal to k, print -1.


// function to find the first element 
// occurring k number of times 
int firstElement(int arr[], int n, int k) 
{ 
    // unordered_map to count 
    // occurrences of each element 
    unordered_map<int, int> count_map; 
    for (int i=0; i<n; i++) 
        count_map[arr[i]]++; 
      
    for (int i=0; i<n; i++)   
  
        // if count of element == k ,then 
        // it is the required first element  
        if (count_map[arr[i]] == k) 
            return arr[i]; 
              
    // no element occurs k times 
    return -1; 
} 
  