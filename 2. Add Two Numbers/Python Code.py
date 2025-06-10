# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        dummy = ListNode(-1)
        curr = dummy
        carry = 0

        t1 = l1
        t2 = l2

        while t1 or t2:
            sum_val = carry
            if t1:
                sum_val += t1.val
                t1 = t1.next
            if t2:
                sum_val += t2.val
                t2 = t2.next

            carry = sum_val // 10
            curr.next = ListNode(sum_val % 10)
            curr = curr.next

        if carry:
            curr.next = ListNode(carry)

        return dummy.next