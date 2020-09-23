void leftview(Node *root)
{
	int max_level = 0;
	leftview_util(root , 1 , &max_level);
}

leftview_util(Node *root , int level , int *max_level)
{
		if(root==NULL)
				return 0;

		if(*max_level < level){
			cout<<root->data<<endl;
			*max_level = level;
		}

		leftview_util(root->left , level+1 , &max_level);
		leftview_util(root->right , level +1 , &max_level);
} 