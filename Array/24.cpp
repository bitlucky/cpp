// print the pascal triangle

void printPascal ( int arr[][] ,int n )
{
    for(int line =0 ; line<n ; line++)
    {
        for(int j=0 ; j<=line ; j++ )
        {
          if(line==i || i==0 )
            arr[i][j]=1;
          else 
          {
              arr[i][j] = arr[line-1][j-1] + arr[line-1][j];
              cout<<arr[i][j]<<" ";
          }
          cout<<endl;
        }
    }
}