void helper( Node* root, vector<int> &result) 
{
    if(root==NULL)
        return;
    helper(root->left , result ); 
    result.push_back(root->data  );
    helper(root->right, result );
}

vector<int> inOrder(Node* root)
{
  vector<int> result;
  helper(root , result);
  return result;
  
}
