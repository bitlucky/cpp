// Rotate Matrix 

void rotate( int arr[][] ,int n )
{
    for(int i=0 ; i<n ; i++)
        for(int j=0 ; j<i ; j++)
            swap(arr[i][j] , arr[j][i]);

    for(int i=0 ;i<n ; i++)
        reverse(m[i].begin() , m[i].end());
    
}