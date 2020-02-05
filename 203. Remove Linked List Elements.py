# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def removeElements(self, head: ListNode, val: int) -> ListNode:
        # use a dummy node to express previous
        dummy=ListNode(-1)
        dummy.next=head
        start=dummy
        while head!=None:
            if head.val==val:
                dummy.next=head.next
                head=head.next
            else:
                dummy=dummy.next
                head=head.next
        return start.next
