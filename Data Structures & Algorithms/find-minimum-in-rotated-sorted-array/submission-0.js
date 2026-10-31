class Solution {
    /**
     * @param {number[]} nums
     * @return {number}
     */
    findMin(nums) {
        let low=0,high=nums.length-1;
        let mini=nums[0];
        while(low<=high){
            let mid=Math.floor((low+high)/2);
            if(nums[low]<=nums[mid]){
                mini=Math.min(nums[low],mini);
                low=mid+1;
            }else{
                mini=Math.min(nums[mid],mini);
                high=mid-1;
            }
        }
        return mini;
    }
}
