Method 1 (By Storing root to n1 and root to n2 paths):
Following is simple O(n) algorithm to find LCA of n1 and n2.
1) Find path from root to n1 and store it in a vector or array.
2) Find path from root to n2 and store it in another vector or array.
3) Traverse both paths till the values in arrays are same. Return the common element just before the mismatch. 

bool findPath(Node *root, vector<int> &path, int k) 
{ 
    // base case 
    if (root == NULL) return false; 
  
    // Store this node in path vector. The node will be removed if 
    // not in path from root to k 
    path.push_back(root->key); 
  
    // See if the k is same as root's key 
    if (root->key == k) 
        return true; 
  
    // Check if k is found in left or right sub-tree 
    if ( (root->left && findPath(root->left, path, k)) || 
         (root->right && findPath(root->right, path, k)) ) 
        return true; 
  
    // If not present in subtree rooted with root, remove root from 
    // path[] and return false 
    path.pop_back(); 
    return false; 
} 





struct Node* findlca( Node* root , int n1 ,int n2)
{
	if(root==NULL)
		return NULL;

	// If either n1 or n2 matches with root's key, report 
    // the presence by returning root (Note that if a key is 
    // ancestor of other, then the ancestor key becomes LCA 
	if(root->key == n1 || root-> key == n2)
			return root;

	// Look for keys in left and right subtrees 
	Node *leftlca = findlca(root->left , n1 , n2);
	Node *rightlca = findlca(root->right , n1 , n2);


    // If both of the above calls return Non-NULL, then one key 
    // is present in once subtree and other is present in other, 
    // So this node is the LCA 
	if(leftlca && rightlca) return root;
	
	   // Otherwise check if left subtree or right subtree is LCA 
	return (leftlca!=NULL)	? leftlca : rightlca;
}