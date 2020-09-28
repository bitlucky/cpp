// Largest continous subarray 

int kadanes( int arr[] , int n)
{
    int max =0 ;
    int resmax =0 ;
    for(int i=0 ; i<n ; i++)
    {
        max += arr[i];
        if(resmax < max)
        resmax = max;
        if(max <0)
        max = 0;
    }
    
    return resmax;
}