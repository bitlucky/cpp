Algorithm – Mirror(tree):

(1)  Call Mirror for left-subtree    i.e., Mirror(left-subtree)
(2)  Call Mirror for right-subtree  i.e., Mirror(right-subtree)
(3)  Swap left and right subtrees.
          temp = left-subtree
          left-subtree = right-subtree
          right-subtree = temp


void toMirror(Node* node)
{
	if(node == NULL)
		return;
	else
	{
	toMirror(node->left);
	toMirror(node->right);

	 /* swap the pointers in this node */
	struct Node* temp;
	temp = node-> left;
	node->left = node->right;
	node->right = temp;
	
	}

	

}