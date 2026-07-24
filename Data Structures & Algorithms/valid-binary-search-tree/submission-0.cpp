/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isBst(TreeNode* node, long minValue, long maxValue){
        if(node==NULL) return true;
        if(node->val >= maxValue || node->val <= minValue) return false;
        return isBst(node->left, minValue, node->val) && isBst(node->right, node->val, maxValue);
    }
    bool isValidBST(TreeNode* root) {
        return isBst(root, LONG_MIN, LONG_MAX);
    }
};
