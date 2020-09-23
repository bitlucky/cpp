void helper(Node* root , vector<int> &res)
{
    if(root==NULL)
        return;
    helper(root->left , res);
    helper(root->right ,res);
    res.push_back(root->data );
    
}

vector <int> postOrder(Node* root) 
{
  vector<int> res;
  helper(root , res);
  return res;
}