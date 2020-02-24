# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def levelOrderBottom(self, root: TreeNode) -> List[List[int]]:
        
        if root==None:
            return []
        queue=list()
        queue.append(root)
        output=list()
        
        while (len(queue)>0):
            thisroundcount=len(queue)
            templist=list()
            while(thisroundcount!=0):

                head=queue.pop(0)
                if head.left!=None:
                    queue.append(head.left)
                if head.right!=None:
                    queue.append(head.right)
                templist.append(head.val)
                thisroundcount-=1
            output.append(templist)
            
        print(output[::])
        return output[::-1]
