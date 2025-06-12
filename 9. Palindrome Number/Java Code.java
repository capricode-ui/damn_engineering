class Solution {
    public boolean isPalindrome(int x) {
        int original=x;
        int reversed=0;
        int digit;
        while(x>0){
            digit=x%10;
            reversed=reversed*10+digit;
            x=x/10;
        }

        return reversed==original;
        

      
    }
}
