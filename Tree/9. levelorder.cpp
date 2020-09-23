// /*Function to print level order traversal of tree*/
// printLevelorder(tree)
// for d = 1 to height(tree)
//    printGivenLevel(tree, d);

// /*Function to print all nodes at a given level*/
// printGivenLevel(tree, level)
// if tree is NULL then return;
// if level is 1, then
//     print(tree->data);
// else if level greater than 1, then
//     printGivenLevel(tree->left, level-1);
//     printGivenLevel(tree->right, level-1);


/* Function to print level  
order traversal a tree*/
void printLevelOrder(node* root)  
{  
    int h = height(root);  
    int i;  
    for (i = 1; i <= h; i++)  
        printGivenLevel(root, i);  
}  
  
/* Print nodes at a given level */
void printGivenLevel(node* root, int level)  
{  
    if (root == NULL)  
        return;  
    if (level == 1)  
        cout << root->data << " ";  
    else if (level > 1)  
    {  
        printGivenLevel(root->left, level-1);  
        printGivenLevel(root->right, level-1);  
    }  
}  