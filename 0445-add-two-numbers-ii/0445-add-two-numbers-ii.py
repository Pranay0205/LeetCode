# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:

        list1 = ""
        head = l1
        while head != None:
            list1 += str(head.val)
            head = head.next

        head = l2
        list2 = ""
        while head != None:
            list2 += str(head.val)
            head = head.next
        

        
        max_len = max(len(list1), len(list2))
        list1 = list1.zfill(max_len)
        list2 = list2.zfill(max_len)
        
        carry_over = 0
        res = ""
 
        for i in range(max_len - 1, -1, -1):
            digit_sum = int(list1[i]) + int(list2[i]) + carry_over
            
            if digit_sum >= 10:
                carry_over = 1
                res = str(digit_sum % 10) + res
            else:
                carry_over = 0
                res = str(digit_sum) + res

        if carry_over:
            res = "1" + res

        res = res[::-1]
        
        print(res)

        head = None       
        for num in res:
            head = ListNode(int(num), next=head)
        
        return head