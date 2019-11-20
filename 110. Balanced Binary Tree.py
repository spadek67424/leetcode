# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def checkheight(self,root):
        if root==None:
            return 0
        return max(self.checkheight(root.left),self.checkheight(root.right))+1
    def isBalanced(self, root: TreeNode) -> bool:
        if root==None:
            return True
        le=self.checkheight(root.left)
        rh=self.checkheight(root.right)
        if le-rh>1 or le-rh<-1:
            return False
        
        return self.isBalanced(root.left) and self.isBalanced(root.right)
