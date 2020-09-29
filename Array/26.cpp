// Inversion of array

int merge(int arr[] , int temp[] , int left , int mid , int right)
{
    int i left;
    int j = mid;
    int k = left;
    int inv_count=0;
    while((i <= mid-1 ) && (j<=right))
    {
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else {
                temp[k++] = arr[j++];

        inv_count = inv_count + (mid-i);
    
        }
            }

    while(i<=mid-1)
        temp[k++] = temp[i++];
    while(j<=right)
        temp[k++] = temp[j++];

    for(i = left ; i<right ; i++)
        arr[i] = temp[i];

    return inv_count;

}


int mergeSort(int arr[] , int temp[] , int high , int low )
{
    int mid , inv_count=0;
    while(right > left)
    {
        mid = (right+low)/2;
        inv_count += mergeSort(arr , temp , low , mid );
        inv_count += mergeSort(arr , temp , mid+1 , high );

        inv_count += merge(arr , temp , left , mid+1 , right );
    }
    return inv_count;
}