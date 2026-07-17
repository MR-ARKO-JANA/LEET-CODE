
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(100 * sizeof(int));
    *returnSize = 0;
    
    if (root == NULL) {
        return result;
    }
    struct TreeNode** stack = (struct TreeNode**)malloc(100 * sizeof(struct TreeNode*));
    int top = -1; 
    
    struct TreeNode* curr = root;
    
    while (curr != NULL || top != -1) {
        while (curr != NULL) {
            stack[++top] = curr; // Push current node to stack
            curr = curr->left;
        }
        
        curr = stack[top--];
        result[(*returnSize)++] = curr->val;
        curr = curr->right;
    }
    
    free(stack); // Clean up our temporary stack
    return result;
}