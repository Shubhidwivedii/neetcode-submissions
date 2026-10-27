class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLongestSubstring(s) {
        const map=new Map();
        let l=0;
        let r=0;
        let len=0;
        while(r<s.length){
            if(map.has(s[r])){
                if(l<=map.get(s[r])){
                    l=map.get(s[r])+1;
                }
            }
            len=Math.max(len,r-l+1);
            map.set(s[r],r);
            r++;
        }
        return len;
    }
}
