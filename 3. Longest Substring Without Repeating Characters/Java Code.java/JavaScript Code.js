/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let charMap=new Map();
    let n=s.length;
    let l=0;
    let maxlen=0;
    for(let r=0;r<n;r++){
        let current=s[r];
        if(charMap.has(current)&&charMap.get(current)>=l){
            l=charMap.get(current)+1;
        }
        charMap.set(current,r);
        maxlen=Math.max(maxlen,r-l+1);
    }
    return maxlen;
};