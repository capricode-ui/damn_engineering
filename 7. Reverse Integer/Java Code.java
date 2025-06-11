class Solution {
    public int reverse(int x) {
        int MIN=Integer.MIN_VALUE;
        int MAX=Integer.MAX_VALUE;
        int res=0;
        int sign=x<0 ? -1:1;
        long x_abs=Math.abs((long)x);
        while(x_abs>0){
            int digit=(int)(x_abs%10);
            x_abs/=10;
            if(res>(MAX-digit)/10){
                return 0;
            }
            res=res*10+digit;
        }
        res=res*sign;
        if(res<MIN || res>MAX){
            return 0;
        }
        return res;
    }

}
