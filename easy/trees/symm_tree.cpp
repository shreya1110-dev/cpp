// https://leetcode.com/problems/symmetric-tree/


bool traverse(TreeNode *root1, TreeNode *root2){
        
        // check if either root1 or root2 is empty and their correspondinh mirror image
        if(root1 == NULL || root2 == NULL){
            return (root1 == root2);
        }
        
        // if 2 values are same, check for left and right values
        return ((root1->val == root2->val) && traverse(root1->left, root2->right) && traverse(root2->left, root1->right));
    }
    bool isSymmetric(TreeNode* root) {
        
        // check for left and right
        return traverse(root->left, root->right);
    }
