# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def __init__(self):
        self.list1=list()
        self.list2=list()
    
    def binaryTreePaths(self, root: TreeNode) -> List[str]:
        
        st=""
        if root==None:
            return [];
        self.list1.append(root.val)
        self.binaryTreePaths(root.left)
        self.binaryTreePaths(root.right)
        
        if(root.left==None and root.right==None):
            print(self.list1)
            st=""
            for x in self.list1:
                st+=str(x)
                st+="->"
            self.list2.append(st[0:-2:])
        self.list1.pop()
        return self.list2
