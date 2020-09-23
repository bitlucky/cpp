Approach 1 : 
// A simple solution for this problem is to store Inorder traversal of given binary search tree 
// in an auxiliary array and then by taking absolute difference of each element find the node having 
// minimum absolute difference with given target value K in linear time.


// Approach 2 : 
// An efficient solution for this problem is to take advantage of characteristics of BST. 
// Here is the algorithm to solve this problem :

// If target value K is present in given BST, then it’s the node having minimum absolute difference.
//If target value K is less than the value of current node then move to the left child.
//If target value K is greater than the value of current node then move to the right child.


// Function to find node with minimum absolute 
// difference with given K 
// min_diff   --> minimum difference till now 
// min_diff_key  --> node having minimum absolute 
//                   difference with K 
void maxDiffUtil(struct Node *ptr, int k, int &min_diff, 
                                      int &min_diff_key) 
{ 
    if (ptr == NULL) 
        return ; 
  
    // If k itself is present 
    if (ptr->key == k) 
    { 
        min_diff_key = k; 
        return; 
    } 
  
    // update min_diff and min_diff_key by checking 
    // current node value 
    if (min_diff > abs(ptr->key - k)) 
    { 
        min_diff = abs(ptr->key - k); 
        min_diff_key = ptr->key; 
    } 
  
    // if k is less than ptr->key then move in 
    // left subtree else in right subtree 
    if (k < ptr->key) 
        maxDiffUtil(ptr->left, k, min_diff, min_diff_key); 
    else
        maxDiffUtil(ptr->right, k, min_diff, min_diff_key); 
} 