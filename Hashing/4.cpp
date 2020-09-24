// check if two array are equal 

A simple solution is to sort both array and then linearly compare elements.

Method 2 :

An Efficient solution of this approach is to use hashing. We store all elements of arr1[] and their 
counts in a hash Then we traverse arr2[] and check if count of every element in arr2[] 
matches with count in arr1[].


// Returns true if arr1[0..n-1] and arr2[0..m-1] 
// contain same elements. 
bool areEqual(int arr1[], int arr2[], int n, int m) 
{ 
    // If lengths of arrays are not equal 
    if (n != m) 
        return false; 
  
    // Store arr1[] elements and their counts in 
    // hash map 
    unordered_map<int, int> mp; 
    for (int i = 0; i < n; i++) 
        mp[arr1[i]]++; 
  
    // Traverse arr2[] elements and check if all 
    // elements of arr2[] are present same number 
    // of times or not. 
    for (int i = 0; i < n; i++) { 
        // If there is an element in arr2[], but 
        // not in arr1[] 
        if (mp.find(arr2[i]) == mp.end()) 
            return false; 
  
        // If an element of arr2[] appears more 
        // times than it appears in arr1[] 
        if (mp[arr2[i]] == 0) 
            return false; 
  
        mp[arr2[i]]--; 
    } 
  
    return true; 
} 