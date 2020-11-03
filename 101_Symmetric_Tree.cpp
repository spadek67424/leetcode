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
    bool ismirror(TreeNode* left_node,TreeNode* right_node)
    {
        if(left_node==NULL&&right_node==NULL)
        {
            return true;
        }
        else if(left_node==NULL || right_node==NULL)
        {
            return false;
        }
        return (left_node->val==right_node->val && ismirror(left_node->left,right_node->right) && ismirror(left_node->right,right_node->left) );
    }
    bool isSymmetric(TreeNode* root) {
        return ismirror(root,root);
    }
};