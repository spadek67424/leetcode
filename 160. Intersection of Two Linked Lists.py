# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        if not headA or not headB:
            return None
        startA=headA
        startB=headB
        while headA != headB:
            headA=headA.next
            headB=headB.next
            if headA==headB:
                return headA
            if not headA:
                headA=startB
            if not headB:
                headB=startA
        return headA
