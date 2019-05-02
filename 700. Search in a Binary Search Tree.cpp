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
    TreeNode* searchBST(TreeNode* root, int val) {
        while(val!=root->val){
            if(val<root->val){
                if(root->left==NULL){
                    return NULL;    
                }
                else{
                    root=root->left;
                }
            }
            else if(val>root->val){
                if(root->right==NULL){
                    return NULL;
                }
                else{
                    root=root->right;
                }
            }
        }
        return root;
    }
};
