// inorder tree traversal

void inorder(TreeNode *root, vector<int> &order){
        // if root doesnt exist, no elements
        if(!root){
            return;
        }
        
        // left
        inorder(root->left, order);
        
        // root
        order.push_back(root->val);
        
        // right
        inorder(root->right, order);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> order;
        inorder(root, order);
        return order;
    }

