class Solution {
    public :
    int myAtoi(string s) {
       if(s.length()==0){return 0;}
       int i;
       for(i=0;i<s.length() && s[i]==' ';i++){}
       s=s.substr(i);
       int sign=+1;
       long ans=0;
       if(s[0]=='-'){sign=-1;}
       i=(s[0]=='+'||s[0]=='-')?1:0;
       while(i<s.length()){
        if(s[i]==' '||!isdigit(s[i]))break;
        ans=ans*10+s[i]-'0';
        if(sign==+1 && ans>INT_MAX){return INT_MAX;}
        if(sign==-1 && -1*ans<INT_MIN){return INT_MIN;}
        i++;
       }
       return (int)(sign*ans);
    }
};