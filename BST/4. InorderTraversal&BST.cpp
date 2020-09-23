// condition 1 : all the elements are unique 
// condition 2 : a[i] < a[i+1];

#include <iostream>
using namespace std;
int main ()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,flag=1;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        b[i]=a[i];
	    }
	    int size= sizeof(b)/sizeof(b[0]);
	    sort(b,b+size);
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]!=b[i]||b[i]==b[i+1])
	        {
	            flag=0;
	        }
	    }
	    cout<<flag<<endl;
	}
	return 0;
}