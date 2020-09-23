// The method discussed in this article uses the technique of reverse in-order 
// tree traversal of BST which optimises the problem to be solved in a single traversal.


// Recursive function to add all 
// greater values in every node 
void modifyBSTUtil(Node* root, int* sum) 
{ 
    // Base Case 
    if (root == NULL) 
        return; 
  
    // Recur for right subtree 
    modifyBSTUtil(root->right, sum); 
  
    // Now *sum has sum of nodes 
    // in right subtree, add 
    // root->data to sum and 
    // update root->data 
    *sum = *sum + root->data; 
    root->data = *sum; 
  
    // Recur for left subtree 
    modifyBSTUtil(root->left, sum); 
} 
  
// A wrapper over modifyBSTUtil() 
void modifyBST(Node* root) 
{ 
    int sum = 0; 
    modifyBSTUtil(root, &sum); 
} 