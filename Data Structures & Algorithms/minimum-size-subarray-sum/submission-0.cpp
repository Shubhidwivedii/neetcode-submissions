class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,r=0,len=nums.size();
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum<target) return 0;
        sum=0;
        while(r<nums.size()){
            sum +=nums[r];
            while(sum >= target){
                len=min(len,r-l+1);
                sum -=nums[l];
                l++;
            }
            r++;
        }
        return len;
        
    }
};