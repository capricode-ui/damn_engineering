class Solution(object):
    def lengthOfLongestSubstring(self, s):
        n=len(s)
        maxlen=0
        l=0
        charMap={}
        for r in range(n):
            current=s[r]
            if current in charMap and charMap[current]>=l:
                l=charMap[current]+1

            charMap[current]=r
            maxlen=max(maxlen,r-l+1) 

        return maxlen       