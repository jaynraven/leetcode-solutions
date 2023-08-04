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
    int minDepth(TreeNode* root) {

        if (root == nullptr) 
            return 0;
        if (root->left == nullptr) {
            return minDepth(root->right) + 1;
        }
        if (root->right == nullptr) {
            return minDepth(root->left) + 1;
        }
        int left_depth = minDepth(root->left);
        int right_depth = minDepth(root->right);
        if (left_depth > right_depth)
            return right_depth + 1;
        else
            return left_depth + 1; 
    }
};