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
    int rangeSumBST(TreeNode* root, int L, int R) {
        int sum=0;
        if(root!=NULL){
            int sum1=rangeSumBST(root->left, L, R);
            int sum2=rangeSumBST(root->right, L, R);
            if(root->val<=R && root->val>=L){
                return sum1+sum2+root->val;
            }
            else{
                return sum1+sum2;
            }
        }
        else{
            return 0;
        }
    
    }
};
