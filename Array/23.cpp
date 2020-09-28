// Set Matrix zeroes 

void setmatrix( int arr[][] , int rows , int col )
{
    int col = 0 ;
    for( int i= 0 ; i< rows  ; i++)
    {
        if(arr[i][0]== 0) col = 0;
        for(int j=1 ; j < col ; j++)
            if(arr[i][j]==0)
                arr[i][0] = arr[0][j] = 0;

    }

    for( int i = rows-1 ; i>=0 ; i--)
    {
        for( int j=col-1 ; j>=0 ; j--)
        {
            if(arr[i][0]==0 || arr[0][j] ==0)
                arr[i][j]=0;

            if(arr[i][0] == 0 ) col = 0;
        }
    }
}