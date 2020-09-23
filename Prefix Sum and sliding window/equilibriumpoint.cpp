Method 1 (Simple but inefficient)
Use two loops. Outer loop iterates through all the element and inner loop 
finds out whether the current 
index picked by the outer loop is equilibrium index or not.
 Time complexity of this solution is O(n^2).

 // C++ program to find equilibrium 
// index of an array 
#include <bits/stdc++.h> 
using namespace std; 

int equilibrium(int arr[], int n) 
{ 
	int i, j; 
	int leftsum, rightsum; 

	/* Check for indexes one by one until 
	an equilibrium index is found */
	for (i = 0; i < n; ++i) 
	{	 

		/* get left sum */
		leftsum = 0; 
		for (j = 0; j < i; j++) 
			leftsum += arr[j]; 

		/* get right sum */
		rightsum = 0; 
		for (j = i + 1; j < n; j++) 
			rightsum += arr[j]; 

		/* if leftsum and rightsum 
		are same, then we are done */
		if (leftsum == rightsum) 
			return i; 
	} 

	/* return -1 if no equilibrium 
	index is found */
	return -1; 
} 

// Driver code 
int main() 
{ 
	int arr[] = { -7, 1, 5, 2, -4, 3, 0 }; 
	int arr_size = sizeof(arr) / sizeof(arr[0]); 
	cout << equilibrium(arr, arr_size); 
	return 0; 
} 

// This code is contributed 
// by Akanksha Rai(Abby_akku) 



Method 2 (Tricky and Efficient)
The idea is to get the total sum of the array first. 
Then Iterate through the array and keep updating the left sum which is initialized as zero. 
In the loop, we can get the right sum by subtracting the elements one by one. 


1) Initialize leftsum  as 0
2) Get the total sum of the array as sum
3) Iterate through the array and for each index i, do following.
    a)  Update sum to get the right sum.  
           sum = sum - arr[i] 
       // sum is now right sum
    b) If leftsum is equal to sum, then return current index. 
       // update leftsum for next iteration.
    c) leftsum = leftsum + arr[i]
4) return -1 
// If we come out of loop without returning then
// there is no equilibrium index


