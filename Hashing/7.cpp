//Non-Repeating Element

A Simple Solution is to use two loops. The outer loop picks 
elements one by one and inner loop checks if the element is present more than once or not.

int firstNonRepeating(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) { 
        int j; 
        for (j = 0; j < n; j++) 
            if (i != j && arr[i] == arr[j]) 
                break; 
        if (j == n) 
            return arr[i]; 
    } 
    return -1; 
} 


An Efficient Solution is to use hashing.
1) Traverse array and insert elements and their counts in hash table.
2) Traverse array again and print first element with count equals to 1.

int firstNonRepeating(int arr[], int n) 
{ 
    // Insert all array elements in hash 
    // table 
    unordered_map<int, int> mp; 
    for (int i = 0; i < n; i++) 
        mp[arr[i]]++; 
  
    // Traverse array again and return 
    // first element with count 1. 
    for (int i = 0; i < n; i++) 
        if (mp[arr[i]] == 1) 
            return arr[i]; 
    return -1; 
} 

