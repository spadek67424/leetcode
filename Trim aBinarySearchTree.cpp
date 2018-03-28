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
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        TreeNode *a =root;
        if(root->left!=NULL)
        {
            root->left=trimBST(root->left,L,R);      
        }
        
        
        
        if(root->right!=NULL)
        {
            root->right=trimBST(root->right,L,R);
        
            
        }
        
        if(root->val<L&&root->right==NULL)
        {
            return NULL;
        }
        else if(root->val<L&&root->right!=NULL)
        {
            return root->right;
        }
        if(root->val>R&&root->left==NULL)
        {
          
            return NULL;
           
        }
        else if(root->val>R&&root->left!=NULL)
        {
            return root->left;
        }
        
        
        return root;
    }
};