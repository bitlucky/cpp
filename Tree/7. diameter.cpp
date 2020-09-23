The diameter of a tree T is the largest of the following quantities:

* the diameter of T’s left subtree
* the diameter of T’s right subtree
* the longest path between leaves that goes through the root of T 


int finddiameter( Node *root )
{
	if(root==NULL)
		return 0;
	/* get the height of left and right sub-trees */
	int lheight = height(root_>left);
	int rheigth = height(root->right);

	/* get the diameter of left and right sub-trees */
	int ldiameter = ldiameter(root-> left);
	int rdiameter = rdiameter(root->right);

	  
  /* Return max of following three 
   1) Diameter of left subtree 
   2) Diameter of right subtree 
   3) Height of left subtree + height of right subtree + 1 */
	return max(lheight+rheigth+1 , max(ldiameter , rdiameter));
}

int height(Node *root)
{
	int lheight = height(root->left);
	int rheigth = height(root->right);

	return 1 + max(lheight , rheigth);
}