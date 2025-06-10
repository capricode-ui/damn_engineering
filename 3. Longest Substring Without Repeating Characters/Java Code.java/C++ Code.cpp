class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n=s.length();
       int maxlen=0;
       int l=0;
       unordered_map <char,int> charMap;
       for(int r=0;r<n;r++){

        if(charMap.find(s[r])!=charMap.end() && charMap[s[r]]>=l){
            l=charMap[s[r]]+1;
        }
        charMap[s[r]]=r;
        maxlen=max(maxlen,r-l+1);

       }
       return maxlen;
        
    }
};