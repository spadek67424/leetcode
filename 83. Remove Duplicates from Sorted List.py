# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteDuplicates(self, head: ListNode) -> ListNode:
        check=set()
        temp=head
        output=head
        while head!=None:
            if head.val in check:
                temp.next=head.next
                head=head.next
            else:
                check.add(head.val)
                temp=head
                head=head.next
                
            
            
        return output
