class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    longestConsecutive(nums) {
        const set=new Set(nums);
        let len=0;
        for(const x of set){
            if(!set.has(x-1)){
                let currentlen=1;
                let num=x;
                while(set.has(num+1)){
                    currentlen++;
                    num++;
                }
                len=Math.max(currentlen,len);
            }
        }
        return len;
        
    }
}
