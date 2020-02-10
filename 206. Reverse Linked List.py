# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def reverseList(self, head: ListNode) -> ListNode:
        if head==None or head.next==None:
            return head
        
        #dummy=ListNode(-1)
        #dummy.next=head 
        dummy=None
        #end=head
        
        
        while head!=None:
            #if head.next==None:
            #    end.next=None
            temp=head.next
            head.next=dummy
            dummy=head
            head=temp
        return dummy
                
        
        
