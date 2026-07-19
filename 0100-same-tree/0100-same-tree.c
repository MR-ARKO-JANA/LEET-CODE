/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    // If both nodes are NULL, they are identical up to this point
    if (p == NULL && q == NULL) {
        return true;
    }
    
    // If only one node is NULL, or their values are different, they are not identical
    if (p == NULL || q == NULL || p->val != q->val) {
        return false;
    }
    
    // Recursively check the left and right subtrees
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}