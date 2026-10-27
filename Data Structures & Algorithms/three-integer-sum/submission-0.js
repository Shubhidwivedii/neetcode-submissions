class Solution {
    /**
     * @param {number[]} nums
     * @return {number[][]}
     */
    threeSum(nums) {
        let ans=[];
        nums.sort((a,b)=>a-b);
        for(let i=0;i<nums.length;i++){
            if(i>0 && nums[i]===nums[i-1]){
                continue;
            }
            let num=nums[i];
            let l=i+1;
            let r=nums.length-1;
            while(l<r){
                let total=num+nums[l]+nums[r];
                if(total===0){
                    ans.push([num,nums[l],nums[r]])
                l++;
                r--;
                while(l<nums.length && nums[l]===nums[l-1]){l++;}
                while(r>0 && nums[r]===nums[r+1]){ r--;}
                }
                else if(total>0){
                    r--;
                }else{
                    l++;
                }
            }
        }
        return ans;
    }
}
