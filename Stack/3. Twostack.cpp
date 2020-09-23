Method 1 (Divide the space in two halves)
A simple way to implement two stacks is to divide the array in two halves and assign the half half 
space to two stacks, i.e., use arr[0] to arr[n/2] for stack1, and arr[(n/2) + 1] to arr[n-1] 
for stack2 where arr[] is the array to be used to implement two stacks and size of array be n. 


The problem with this method is inefficient use of array space. 
A stack push operation may result in stack overflow even if there is space available in arr[]. 
For example, say the array size is 6 and we push 3 elements to stack1 and do not push anything to second 
stack2. When we push 4th element to stack1, there will be overflow even if we have space for 3 more elements 
in array.



Method 2 (A space efficient implementation)
This method efficiently utilizes the available space. 
It doesn’t cause an overflow if there is space available in arr[]. 
The idea is to start two stacks from two extreme corners of arr[]. 
stack1 starts from the leftmost element, the first element in stack1 is pushed at index 0.
 The stack2 starts from the rightmost corner, the first element in stack2 is pushed at index (n-1). 
 Both stacks grow (or shrink) in opposite direction. To check for overflow, all we need to check is 
 for space between top elements of both stacks. This check is highlighted in the below code.

 

