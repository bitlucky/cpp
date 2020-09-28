//repeating and missing number

void repeatAndMissing(int arr[] , int n)
{
    int S=0;
    int P=1;
    int c= n-2;

    for(int i=0 ; i<n ; i++)
    {
        S += arr[i];
        P *= arr[i];
    }
    S = S - n(n+1)/2;
    P = P/fact(c);

    D=sqrt(S*S - 4P)
    x = (D+S)/2;
    y = (S-D)/2;

    int fact(int c)
    {
        return (c==0) ? 1 : c*fact(c-1);
    }
}
