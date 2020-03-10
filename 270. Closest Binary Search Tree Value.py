# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def closestValue(self, root: TreeNode, target: float) -> int:
        difference=abs(root.val-target)
        output=root
        while (root!=None):
            print(difference)
            if difference>=abs(root.val-target):
                difference=abs(root.val-target)
                output=root
            if root.val>=target:
                root=root.left
            else:
                root=root.right
        return output.val
