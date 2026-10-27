class Solution {
    /**
     * @param {string} s
     * @param {number} k
     * @return {number}
     */
    characterReplacement(s, k) {
        const map=new Map();
        let r=0;
        let l=0;
        let len=0;
        let maxfreq=0;
        while(r<s.length){
            map.set(s[r],(map.get(s[r])||0)+1);
            maxfreq=Math.max(maxfreq,map.get(s[r]));
            if(r-l+1-maxfreq>k){
                map.set(s[l],(map.get(s[l])-1));
                if(map.get(s[l])===0){
                    map.delete(s[l]);
                }
                l++;
            }
            len=Math.max(len,r-l+1);
            r++;
        }
        return len;
    }
}
