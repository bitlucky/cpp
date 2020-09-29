//Buy and sell 

Step 1 : Traverse the given array.
step 2 : store the minimal value in the minPrice variable.
Step 3 : at each iteration comapre every element with the minPrice variable and store minimum value;
Step 4 : also keep track of Maxpro which will be the difference of arr[i] - minPrice

int stock(int arr[] , int n)
{
    int minPrice = INT_MAX , maxPro = 0;
    for(int i=0 ; i<n ; i++)
    {
        minPrice = min(minPrice , arr[i]);
        maxPro = max(maxPro , arr[i] - minPrice)
    }
}