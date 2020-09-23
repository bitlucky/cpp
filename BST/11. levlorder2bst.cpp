// Convert level order traversal to bst 

// The idea is to use the Recursion:-
// We know that the first element will always be the root of tree and second 
// element will be the left child and third element will be the right child (if fall in the range), 
// and so on for all the remaining elements.

// 1) First pick the first element of the array and make it root.
// 2) Pick the second element, if it’s value is smaller than root node value make it left child,
// 3) Else make it right child
// 4) Now recursively call the step (2) and step (3) to make a BST from its level Order Traversal.


Node *LevelOrder(Node *root , int data)  
{ 
     if(root==NULL){     
        root = getNode(data); 
        return root; 
     } 
     if(data <= root->data) 
     root->left = LevelOrder(root->left, data); 
     else
     root->right = LevelOrder(root->right, data); 
     return root;      
} 
  
Node* constructBst(int arr[], int n) 
{ 
    if(n==0)return NULL; 
    Node *root =NULL; 
  
    for(int i=0;i<n;i++) 
    root = LevelOrder(root , arr[i]); 
      
    return root; 
} 
  