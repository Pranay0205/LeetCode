# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:

        curr = head
        count = 0
        while curr:
            count += 1
            curr = curr.next
        
        
        half_length = count // 2

  
        curr = head
        i = 0
        while i < half_length:
            i += 1
            curr = curr.next
        
        sl_head = curr.next
        curr.next = None
        prev = None
        while sl_head:
            slNext = sl_head.next
            sl_head.next = prev
            prev = sl_head
            sl_head = slNext
        
        list1, list2 = head, prev
        while list2:
            tmp1, tmp2 = list1.next, list2.next
            list1.next = list2
            list2.next = tmp1
            list1, list2  = tmp1, tmp2
  




            