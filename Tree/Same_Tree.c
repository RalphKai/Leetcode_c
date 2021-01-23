/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if (!p && !q) return true;
    if (!p || !q) return false;
    if (p->val != q->val) return false;
    
    
    if (p->left != NULL && q->left != NULL){
        
        if( !isSameTree(p->left, q->left)) return false;
    }
    if (p->right != NULL && q->right != NULL)
        if (!isSameTree(p->right, q->right)) return false;
    if ((p->left && !q->left) || (!p->left && q->left)) return false;
    if ((p->right && !q->right) || (!p->right && q->right)) return false;
    
    
    return true;
}