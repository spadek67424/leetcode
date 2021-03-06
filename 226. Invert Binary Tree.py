# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def invertTree(self, root: TreeNode) -> TreeNode:
        if root==None:
            return None
        temp=TreeNode(None);
        self.invertTree(root.left)
        self.invertTree(root.right)
        temp=root.left
        root.left=root.right
        root.right=temp
        
        return root
