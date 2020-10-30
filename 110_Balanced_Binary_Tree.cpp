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
    int caldepth(TreeNode* root)
    {
        if (root==NULL)
        {
            return 1;
        }
        
        return 1+max(this->caldepth(root->right),this->caldepth(root->left));
    }
    bool isBalanced(TreeNode* root) {
        if (root==NULL)
        {
            return true;
        }
        int left=this->caldepth(root->left);
        int right=this->caldepth(root->right);
        int sum=abs(right-left);
        return ((sum<2) && this->isBalanced(root->left) && this->isBalanced(root->right));
    }
};