var myAtoi = function(s) {
 const INT_MIN=-(2**31);
 const INT_MAX=2**31-1;
 if(s.length===0){return 0;}
 let i=0;
 while(i<s.length && s[i]===' '){i++;}
 s=s.substring(i);
 let sign=1;
 if(s[0]==='-'){sign=-1;}
 i=(s[0]==='+'||s[0]==='-')?1:0;
 let ans=0;
 while(i<s.length){
    if(s[i]<'0'||s[i]>'9'){
        break;
    }
    ans=ans*10+s[i].charCodeAt(0)-'0'.charCodeAt(0);
    if(sign*ans>INT_MAX){return INT_MAX;}
    if(sign*ans<INT_MIN){return INT_MIN;}
    i++;
 }
 return sign*ans;
};
