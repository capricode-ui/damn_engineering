#include <climits>
class Solution {
public:
    int reverse(int x) {
       long long x_abs=abs(static_cast<long long>(x));
       long long res=0;
       int sign=x<0 ?-1:1;
       while(x_abs>0){
        int digit=x_abs%10;
        x_abs=x_abs/10;
        if(res>(INT_MAX-digit)/10){
            return 0;
        }
        res=res*10+digit;
       }
       if(res>INT_MAX || res<INT_MIN){
        return 0;
       }
       res=sign*res;
       return static_cast<int>(res);
    }  
};
