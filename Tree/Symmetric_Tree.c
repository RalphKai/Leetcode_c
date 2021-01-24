/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool checkTree(struct TreeNode* treeLeft, struct TreeNode* treeRight);

bool isSymmetric(struct TreeNode* root){
    if (!root) return true; // null tree
    if (!(root->left) && !(root->right)) return true;
    if (!root->left || !root->right) return false; // one side tree
    
    
    if(!checkTree(root->left, root->right)) return false;
    return true;
}

bool checkTree(struct TreeNode* treeLeft, struct TreeNode* treeRight){
    if (!treeLeft && !treeRight) return true;
    if (!treeLeft || !treeRight) return false;  //one side tree
    printf("treeLeft: %d, treeRight: %d\n", treeLeft->val, treeRight->val);
    
    if (treeLeft->val != treeRight->val) return false;
    
    if(!checkTree(treeLeft->left, treeRight->right) ||\
      !checkTree(treeLeft->right, treeRight->left)) return false;
    return true;
}