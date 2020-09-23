Given an unsorted array arr[] and two numbers x and y, find the minimum distance between x and y in arr[].



    Create a variable m = INT_MAX
    Run a nested loop, the outer loop runs from start to end (loop counter i), 
    the inner loop runs from i+1 to end (loop counter j).
    If the ith element is x and jth element is y or vice versa, update m as m = min(m,j-i)
    Print the value of m as minimum distance

int minDist(int arr[], int n, int x, int y) 
{ 
    int i, j; 
    int min_dist = INT_MAX; 
    for (i = 0; i < n; i++) 
    { 
        for (j = i+1; j < n; j++) 
        { 
            if( (x == arr[i] && y == arr[j] || 
                y == arr[i] && x == arr[j]) && 
                min_dist > abs(i-j)) 
            { 
                min_dist = abs(i-j); 
            } 
        } 
    } 
    return min_dist; 
} 

