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
    bool compareTree(TreeNode* p, TreeNode* q) {
    if (p != nullptr && q != nullptr &&
        p->val == q->val)
    {
        return compareTree(p->left, q->left) && 
            compareTree(p->right, q->right);
    }
    else if (p == nullptr && q == nullptr)
        return true;
    else 
        return false;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        return compareTree(p, q);
    }
};