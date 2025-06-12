class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0) return false; // Negative numbers are not palindromes

        int original = x;
        int reversed = 0;

        while (x > 0) {
            int digit = x % 10;
            x = x / 10;

            // Check for overflow before multiplying and adding
            if (reversed > (Integer.MAX_VALUE - digit) / 10) {
                return false; // Overflow would happen
            }

            reversed = reversed * 10 + digit;
        }

        return reversed == original;
    }
}
