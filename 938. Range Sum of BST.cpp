/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int ans=0;
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root!=NULL){
            if(root->val<=R && root->val>=L){
                ans+=root->val;
            }
            if(root->val>L){
                rangeSumBST(root->left,L,R);
            }
            if(root->val<R){
                rangeSumBST(root->right,L,R);
            }
        }
        return ans;
    }
};
