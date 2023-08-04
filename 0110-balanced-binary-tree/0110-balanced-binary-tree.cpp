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
    bool TreeDepth(TreeNode* node, int& depth) {
        if (node == nullptr)
            return true;
        // depth++;
        int temp1 = depth + 1, temp2 = depth + 1;
        if (!TreeDepth(node->left, temp1))
            return false;
        if (!TreeDepth(node->right, temp2))
            return false;
        if (temp1 > temp2 + 1 ||
            temp1 + 1 < temp2) {
            return false;
        }
        depth = max(temp1, temp2);
        return true;
    }

    bool isBalanced(TreeNode* root) {
        int depth = 0;
        return TreeDepth(root, depth);
    }
};