

void zizagtraversal(struct Node* root) 
{ 
    // if null then return 
    if (!root) 
        return; 
  
    // declare two stacks 
    stack<struct Node*> currentlevel; 
    stack<struct Node*> nextlevel; 
  
    // push the root 
    currentlevel.push(root); 
  
    // check if stack is empty    
    bool lefttoright = true; 
    while (!currentlevel.empty()) { 
  
        // pop out of stack 
        struct Node* temp = currentlevel.top(); 
        currentlevel.pop(); 
  
        // if not null 
        if (temp) { 
  
            // print the data in it 
            cout << temp->data << " "; 
  
            // store data according to current 
            // order. 
            if (lefttoright) { 
                if (temp->left) 
                    nextlevel.push(temp->left); 
                if (temp->right) 
                    nextlevel.push(temp->right); 
            } 
            else { 
                if (temp->right) 
                    nextlevel.push(temp->right); 
                if (temp->left) 
                    nextlevel.push(temp->left); 
            } 
        } 
  
        if (currentlevel.empty()) { 
            lefttoright = !lefttoright; 
            swap(currentlevel, nextlevel); 
        } 
    } 
} 



void zigZagTraversal(Node* root)
{
	// Code here
	stack<Node*>s1,s2;
	 if(root==NULL)return ;
    s1.push(root);
    while(!s1.empty()||!s2.empty()){
    while(!s1.empty())
    {
        Node* t=s1.top();
        cout<<t->data<<" ";
        s1.pop();
        if(t->left)
            s2.push(t->left);
        if(t->right)
            s2.push(t->right);
    }
    while(!s2.empty()){
        Node* s=s2.top();
        cout<<s->data<<" ";
        s2.pop();
        if(s->right)
    s1.push(s->right);
     if(s->left)
    s1.push(s->left);
    }}cout<<endl;
}