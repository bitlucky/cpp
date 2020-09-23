// // Pair with given sum in BST

// The Brute Force Solution is to consider each pair in BST and check whether 
// the sum equals to X. The time complexity of this solution will be O(n^2).

// A Better Solution is to create an auxiliary array and store Inorder traversal 
// of BST in the array. The array will be sorted as Inorder traversal of BST always produces 
// sorted data. Once we have the Inorder traversal, we can pair in O(n) time (See this for details). 
// This solution works in O(n) time, but requires O(n) auxiliary space.

