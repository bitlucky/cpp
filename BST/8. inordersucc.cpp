Case 1:
if the node has a right subtree then find the least value from that right subtree

if(p->right != NULL)
{
    temp = p->right ;
    while(temp->left !=NULL)
    {
        temp  = temp ->right
    }
    print(temp);
}

Case 2 : 
if the node p does not have a right subtree , search that node from the root , and the node from 
where we take the last left is the ans (i.e for every left turn store the node value)

while(p->data != root->data)
{
    if(p->data < root->data)
    {
        store = root;
        root = root ->left;
    }
    else{
        root = root->right ;

    }
}
print(store)