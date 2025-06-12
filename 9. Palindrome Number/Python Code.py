class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        original=x
        reversed=0
        while x>0:
            digit=x%10
            reversed=reversed*10+digit
            x=x//10
        return reversed==original
        