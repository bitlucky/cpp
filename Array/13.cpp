// Sorted subsequence of size 3 

// Hint: Use Auxiliary Space.

// Solution: So, the main motive is to find an element which has an element smaller than itself on the left side 
// of the array and an element greater than itself on the right side of the array, if there is any such element 
// then there exists a triplet that satisfies the criteria.

// Approach: This can be solved in a very simple way. To find an element which has an element smaller than 
// itself on its left side of the array, check if that element is the smallest element while traversing the 
// array from starting index i.e., (0), and to check if there is an element greater than itself on its right 
// side of the array check whether that element is the largest element while traversing from the end of the 
// array i.e., (n-1). If the element is not the smallest element from 0 to that index then it has an element 
// smaller than itself on it left side, and similarly if the element is not the largest element from that index 
// to the last index then there is a larger element on its right side


// A function to fund a sorted 
// sub-sequence of size 3 
void find3Numbers(int arr[], int n) 
{ 
    // Index of maximum element 
    // from right side 
    int max = n - 1; 
  
    // Index of minimum element 
    // from left side 
    int min = 0; 
    int i; 
  
    // Create an array that will store 
    // index of a smaller element on left side. 
    // If there is no smaller element on left 
    // side, then smaller[i] will be -1. 
    int* smaller = new int[n]; 
  
    // first entry will always be -1 
    smaller[0] = -1; 
    for (i = 1; i < n; i++) { 
        if (arr[i] <= arr[min]) { 
            min = i; 
            smaller[i] = -1; 
        } 
        else
            smaller[i] = min; 
    } 
  
    // Create another array that will 
    // store index of a greater element 
    // on right side. If there is no greater 
    // element on right side, then 
    // greater[i] will be -1. 
    int* greater = new int[n]; 
  
    // last entry will always be -1 
    greater[n - 1] = -1; 
    for (i = n - 2; i >= 0; i--) { 
        if (arr[i] >= arr[max]) { 
            max = i; 
            greater[i] = -1; 
        } 
        else
            greater[i] = max; 
    } 
  
    // Now find a number which has both 
    // a greater number on right side and 
    // smaller number on left side 
    for (i = 0; i < n; i++) { 
        if (smaller[i] != -1 && greater[i] != -1) { 
            cout << arr[smaller[i]] 
                 << " " << arr[i] << " "
                 << arr[greater[i]]; 
            return; 
        } 
    } 
  
    // If we reach number, then there are 
    // no such 3 numbers 
    cout << "No such triplet found"; 
  
    // Free the dynamically allocated memory 
    // to avoid memory leak 
    delete[] smaller; 
    delete[] greater; 
  
    return; 
} 