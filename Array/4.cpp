//Reverse an array 

// Iterative way :
 

//     1) Initialize start and end indexes as start = 0, end = n-1 
//     2) In a loop, swap arr[start] with arr[end] and change start and end as follows : 
//     start = start +1, end = end – 1

void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start]; 
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    } 
}     