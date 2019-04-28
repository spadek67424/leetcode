# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def sortedArrayToBST(self, nums: List[int]) -> TreeNode:
    
        if len(nums)==0:
            return None
        
        son = TreeNode(nums[int(len(nums)/2)])
        
        if len(nums)==1:
            return son
        
        
        left=self.sortedArrayToBST(nums[0:int(len(nums)/2):])
        son.left=left
        right=self.sortedArrayToBST(nums[int(len(nums)/2)+1:len(nums):])
        son.right=right
       #loopforconstruct(root,nums)
        return son
