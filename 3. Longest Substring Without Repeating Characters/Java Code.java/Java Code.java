import java.util.HashMap;
class Solution {
    public int lengthOfLongestSubstring(String s) {
        int n=s.length();
        int maxlen=0;
        int l=0;
        HashMap <Character , Integer> charMap=new HashMap <>();
        for(int r=0;r<n;r++){
            char current=s.charAt(r);
            if(charMap.containsKey(current)&&charMap.get(current)>=l){
                l=charMap.get(current)+1;
            }
            charMap.put(current,r);
            maxlen=Math.max(maxlen,r-l+1);
        }
        return maxlen;
    }
}
