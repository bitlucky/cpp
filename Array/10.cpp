// Leaders in an array

Use two loops. The outer loop runs from 0 to size – 1 and one by one picks all elements from left to right. 
The inner loop compares the picked element to all the elements to its right side. If the picked element is 
greater than all the elements to its right side, then the picked element is the leader.

/*C++ Function to print leaders in an array */
void printLeaders(int arr[], int size) 
{ 
    for (int i = 0; i < size; i++) 
    { 
        int j; 
        for (j = i+1; j < size; j++) 
        { 
            if (arr[i] < arr[j]) 
                break; 
        }     
        if (j == size) // the loop didn't break 
            cout << arr[i] << " "; 
  } 
} 

Scan all the elements from right to left in an array and keep track of maximum till now. 
When maximum changes its value, print it.

/* C++ Function to print leaders in an array */
void printLeaders(int arr[], int size) 
{ 
    int max_from_right =  arr[size-1]; 
  
    /* Rightmost element is always leader */
    cout << max_from_right << " "; 
      
    for (int i = size-2; i >= 0; i--) 
    { 
        if (max_from_right <= arr[i])  
        {            
            max_from_right = arr[i]; 
            cout << max_from_right << " "; 
        } 
    }     
} 