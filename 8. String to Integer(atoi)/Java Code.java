class Solution {
    public int myAtoi(String s) {
        if(s.length()==0){return 0;}
        int i;
        for(i=0;i<s.length()&& s.charAt(i)==' ';i++){}
        s=s.substring(i);
        if(s.length()==0){return 0;}
        int sign=1;
        if(s.charAt(0)=='-'){sign=-1;}
        i=(s.charAt(0)=='+' || s.charAt(0)=='-')?1:0;
        long ans=0;
        while(i<s.length()){
            char c=s.charAt(i);
            if(!Character.isDigit(c)){
                break;
            }
            ans=ans*10+c-'0';
            if(sign==+1 && ans>Integer.MAX_VALUE){return Integer.MAX_VALUE;}
            if(sign==-1 && -1*ans<Integer.MIN_VALUE){return Integer.MIN_VALUE;}
            i++;
        }
        return sign*(int)ans;
    }
}
