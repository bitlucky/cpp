//to find inroder predecessor in BST 

// Case 1: 
// If the node 'P' has a left subtree , then jump to that left child 
// and go to the right most node (max value in left subtree)

if(p->left != NULL)
{
    temp = p->left ;
    while(temp ->right != NULL)
    {
        temp = temp->right ;
    }
    print(temp->data);
}

// case 2 : 
// if the node p does not have a left subtree , search that node from the root , and the node from 
// where we take the last right is the ans (i.e for every right turn store the node value)

while(p->data != root->data)
{
    if(p->data > root->data)
    {
        store = root;
        root = root->right;
    }
    else 
    {
        root = root->left 
    }
}
print(store);