//Count of smaller elements 

Method 1 (Simple)
Use two loops. The outer loop picks all elements from left to right. 
The inner loop iterates through all the elements on right side of the picked element and updates 
countSmaller[].

void constructLowerArray (int *arr[], int *countSmaller, int n) 
{ 
  int i, j; 
  
  // initialize all the counts in countSmaller array as 0 
  for  (i = 0; i < n; i++) 
     countSmaller[i] = 0; 
  
  for (i = 0; i < n; i++) 
  { 
    for (j = i+1; j < n; j++) 
    { 
       if (arr[j] < arr[i]) 
         countSmaller[i]++; 
    } 
  } 
} 
  