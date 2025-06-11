class Solution(object):
 def myAtoi(self,s):
   INT_MIN=-(2**31)
   INT_MAX=2**31-1
   if not s:
        return 0
   i=0
   while i<len(s) and s[i]==' ':
        i=i+1
   s=s[i: ]
   sign=1
   if s and s[0]=='-':
        sign=-1
   i=1 if s and (s[0]=='+' or s[0]=='-') else 0
   ans=0

   while i<len(s):
        if not s[i].isdigit():
            break
        ans=ans*10+ord(s[i])-ord('0')
        if sign*ans<INT_MIN:
            return INT_MIN
        if sign*ans>INT_MAX:
            return INT_MAX
        i=i+1
    
   return sign*ans

        




        