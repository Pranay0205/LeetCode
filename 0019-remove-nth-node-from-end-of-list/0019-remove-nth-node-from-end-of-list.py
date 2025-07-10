class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:

        curr = head
        length = 0
        while curr:
            length += 1
            curr = curr.next
        
        pos_beg = length - n
        if pos_beg == 0:
            return head.next


        curr = head
        i = 0

        for i in range(pos_beg - 1):
            curr = curr.next
        
        curr.next = curr.next.next

        return head
