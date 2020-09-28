// sort the array of 0's , 1's and 2's

void sortArray( int arr[], int n)
{
    int low = 0;
    int high = n-1;
    int mid = 0;
    for(int i=0 ; i<n ; i++)
    {
        switch(arr[mid])
        {
            case 0:
            swap(arr[low++], arr[mid++]);
            break;
            
            case 1:
            mid++;
            break;
            
            case 2:
            swap(arr[mid] , arr[high--]);
            break;

        }
    }
}