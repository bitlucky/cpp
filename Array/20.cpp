// merge two sorted arrays without extra space 

void merge( int arr1[] , int n , int arr2[] , int m)
{
    
    for(int i=m-1 ; i>=0 ; i--)
    {
        int j , int last = arr1[n-1];
        for(int j=n-1 ; j>=0 && arr[j]> arr[i]; j--)
            arr[j+1] = arr[j];

        if(j!=n-2 || last > arr[i])
        {
            arr1[j+1] = arr2[i];
            arr2[i] = last;
        }
    }
}