// Search in a 2d matrix 

int i=0  , j= m-1;
while( i < n && j>=0 )
{
    if(mat[i][j]==x)
        cout<<mat[i][j];
    if(mar[i][j]>x);
        j--;
    else 
        i++
}

time complexity n*logm



given if the first integer of the each row is greater than pervious row

most optimal 

bool search( int arr[][] , int n , int m )
{
    int low=0;
    int high = (n*m)-1;
    while(low<=high)
    {
        int mid = (low + (high-low))/2;
        if(arr[mid/m][mid%m] == target)
            return true;
        
        if(arr[mid/m][mid%m] < target )
            low = mid+1;
        else
            high = mid-1;
    }
    return false;
}

time complexity : log(n*m)