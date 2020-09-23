// A simple solution is to print use the recursive function discussed in the level
//  order traversal post and print a new line after every call to printGivenLevel().

/* Function to line by line print level order traversal a tree*/
void printLevelOrder(struct node* root) 
{ 
	int h = height(root); 
	int i; 
	for (i=1; i<=h; i++) 
	{ 
		printGivenLevel(root, i); 
		printf("\n"); 
	} 
} 

/* Print nodes at a given level */
void printGivenLevel(struct node* root, int level) 
{ 
	if (root == NULL) 
		return; 
	if (level == 1) 
		printf("%d ", root->data); 
	else if (level > 1) 
	{ 
		printGivenLevel(root->left, level-1); 
		printGivenLevel(root->right, level-1); 
	} 
} 



Approach 2 : 

/ Iterative method to do level order traversal 
// line by line  
void printLevelOrder(node *root)  
{  
    // Base Case  
    if (root == NULL) return;  
  
    // Create an empty queue for level order tarversal  
    queue<node *> q;  
  
    // Enqueue Root and initialize height  
    q.push(root);  
  
    while (q.empty() == false)  
    {  
        // nodeCount (queue size) indicates number 
        // of nodes at current lelvel.  
        int nodeCount = q.size();  
  
        // Dequeue all nodes of current level and  
        // Enqueue all nodes of next level  
        while (nodeCount > 0) 
        {  
            node *node = q.front();  
            cout << node->data << " ";  
            q.pop();  
            if (node->left != NULL)  
                q.push(node->left);  
            if (node->right != NULL)  
                q.push(node->right);  
            nodeCount--;  
        }  
        cout << endl;  
    }  
}  
