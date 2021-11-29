//https://leetcode.com/problems/maximum-depth-of-binary-tree/

int maxDepth(TreeNode* root) {
        // if root is empty, return 0
        if(!root){
            return 0;
        }
        // find maximum of left and right nodes
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return 1 + max(left, right);
    }