//Find elements which are present in first array and not in second

Method 1 (Simple)
A Naive Approach is to use two loops and check element which not present in second array.

// Function for finding  
// elements which are there  
// in a[]  but not in b[]. 
void findMissing(int a[], int b[],  
                 int n, int m) 
{ 
    for (int i = 0; i < n; i++) 
    { 
        int j; 
        for (j = 0; j < m; j++) 
            if (a[i] == b[j]) 
                break; 
  
        if (j == m) 
            cout << a[i] << " "; 
    } 
} 

Method 2 (Use Hashing)
In this method, we store all elements of second array in a hash table (unordered_set). 
One by one check all elements of 
first array and print all those elements which are not present in the hash table.

// Function for finding  
// elements which are there  
// in a[] but not in b[]. 
void findMissing(int a[], int b[],  
                 int n, int m) 
{ 
    // Store all elements of  
    // second array in a hash table 
    unordered_set <int> s; 
    for (int i = 0; i < m; i++) 
        s.insert(b[i]); 
  
    // Print all elements of  
    // first array that are not 
    // present in hash table 
    for (int i = 0; i < n; i++) 
        if (s.find(a[i]) == s.end()) 
            cout << a[i] << " "; 
} 