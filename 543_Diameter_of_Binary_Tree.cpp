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
    int depth(TreeNode* root,int& maxlen)
    {
        int sum=0;
        if(root==NULL)
        {
            return 0;
        }
        if (root->left==NULL && root->right==NULL)
        {
            return 1;
        }
        int L=depth(root->left,maxlen);
        int R=depth(root->right,maxlen);
        maxlen=max(L+R,maxlen);
        return max(L,R)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxlen=0;
        if(root==NULL)
            return 0;
        if (root->left==NULL & root->right==NULL)
            return 0;
        depth(root,maxlen);
        return maxlen;
    }
};