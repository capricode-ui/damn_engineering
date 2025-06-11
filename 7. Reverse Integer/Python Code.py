class Solution:
    def reverse(self,x ):
        if x>=0:
            sign=1
        else:
            sign=-1

        x_abs=abs(x)
        res=0
        MIN,MAX=-2**31,2**31-1
        while x_abs>0:
            digit=x_abs%10
            x_abs=x_abs//10
            if res>(MAX-digit)//10:
                return 0
            res=res*10+digit
        
        res*=sign
        if res<MIN or res>MAX:
            return 0

        return res

        
            

        
        
        

