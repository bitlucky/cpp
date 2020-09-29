// next permutation of the string 

1. Traverse from the right of the array 
2. traverse till you found the element(k) which is greater than n-1 element and break.
3. Again traverse from the right and stop when you get the element(l) which is greater than k.
4. swap both the elements
5. reverse the from k+1 to end of the array.

void nextper(int arr[] , int n )
{
    int k, l ;
    for(k = n-2 ; k>=0 ; k--)
    {
        if(arr[i] < arr[k+1]);
        break;
    }
    for( l = n-1 ; l>=0 ; l--)
    {
        if(arr[l]> arr[k]);
        break;
    }

    swap(arr[l] , arr[k]);
    reverse(arr.begin()+k+1 , arr.end());
}