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
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode* leftbiggest=NULL;
        TreeNode* rightsmallest=NULL;
        /*
        if(root->val!=key&&root->right==NULL&&root->left==NULL)
        {
            return root;
        }
        */
        if(root==NULL)
        {
            return NULL;
            
        }
        if (root->val==key){
            if(root->left!=NULL){
                leftbiggest=root->left;
                while(leftbiggest->right!=NULL){  // find the left tree biggest
                    leftbiggest=leftbiggest->right;
                }
            }
            if(root->right!=NULL)
            {
                rightsmallest=root->right;
                while(rightsmallest->left!=NULL){ // find the right tree smallest
                    rightsmallest=rightsmallest->left;
                }
            }
            
            if(rightsmallest!=NULL){
                root->val=rightsmallest->val;
                root->right=deleteNode(root->right,rightsmallest->val);
                
            }
            else if(leftbiggest!=NULL){
                root->val=leftbiggest->val;
                root->left=deleteNode(root->left,leftbiggest->val);
            }
            else{
                root=NULL;
            }
            
            
            
        }
        
        else if(key<root->val){
            root->left=deleteNode(root->left,key);   
        }
        else if(key>root->val){
            root->right=deleteNode(root->right,key);
        }
        
        return root;
    }
};
