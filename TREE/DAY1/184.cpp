void postorderIterative(Node* root)
{
    // return if the tree is empty
    if (root == nullptr) {
        return;
    }
 
    // create an empty stack and push the root node
    stack<Node*> s;
    s.push(root);
 
    // create another stack to store postorder traversal
    stack<int> out;
 
    // loop till stack is empty
    while (!s.empty())
    {
        // pop a node from the stack and push the data into the output stack
        Node* curr = s.top();
        s.pop();
 
        out.push(curr->data);
 
        // push the left and right child of the popped node into the stack
        if (curr->left) {
            s.push(curr->left);
        }
 
        if (curr->right) {
            s.push(curr->right);
        }
    }
 
    // print postorder traversal
    while (!out.empty())
    {
        cout << out.top() << " ";
        out.pop();
    }
}