var reverse = function(x) {
   const MAX=Math.pow(2,31)-1;
   const MIN=Math.pow(2,31)*-1;
   let sign=x<0?-1:1;
   let res=0;
   let x_abs=Math.abs(x);
   while(x_abs>0){
    let digit=x_abs%10;
    x_abs=Math.floor(x_abs/10);
    if(res>Math.floor((MAX-digit)/10)){
        return 0;
    }
    res=res*10+digit;
   }
   res=res*sign;
   return res;
};
