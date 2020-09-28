// Find duplicates in an array 

void duplicate(int arr[] , int n )
{
    for(int i=0 ; i<n ; i++)
    {
        arr[arr[i]%n] = arr[arr[i]%n] + n ;

    }
    if(arr[i] >= n*2)
        cout<<arr[i];
}