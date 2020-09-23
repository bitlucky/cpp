/* Given a non-empty binary search tree,  
return the minimum data value found in that  
tree. Note that the entire tree does not need  
to be searched. */
int minValue(struct node* node)  
{  
struct node* current = node;  
  
/* loop down to find the leftmost leaf */
while (current->left != NULL)  
{  
    current = current->left;  
}  
return(current->data);  
}  
  