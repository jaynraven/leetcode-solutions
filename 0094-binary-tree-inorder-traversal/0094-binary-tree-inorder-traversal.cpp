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
    void RecurseTraversal(vector<int>& res, TreeNode* root) {
        if (root == nullptr)
            return;
        RecurseTraversal(res, root->left);
        res.push_back(root->val);
        RecurseTraversal(res, root->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        RecurseTraversal(res, root);
        return res;
    }
};