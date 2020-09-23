// The idea is to traverse the given binary search tree starting from root. 
// For every node being visited, check if this node lies in range, 
//     if yes, then add 1 to result and recur for both of its children. 
//     If current node is smaller than low value of range, 
//     then recur for right child, else recur for left child.

// Returns count of nodes in BST in range [low, high] 
int getCount(node *root, int low, int high) 
{ 
    // Base case 
    if (!root) return 0; 
  
    // Special Optional case for improving efficiency 
    if (root->data == high && root->data == low) 
        return 1; 
  
    // If current node is in range, then include it in count and 
    // recur for left and right children of it 
    if (root->data <= high && root->data >= low) 
         return 1 + getCount(root->left, low, high) + 
                    getCount(root->right, low, high); 
  
    // If current node is smaller than low, then recur for right 
    // child 
    else if (root->data < low) 
         return getCount(root->right, low, high); 
  
    // Else recur for left child 
    else return getCount(root->left, low, high); 
} 