class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>sum;
        for(int i=0;i<nums.size();i++){
            int value=target-nums[i];
            if(sum.find(value)!=sum.end()){
                return {sum[value],i};
            }
            sum[nums[i]]=i;
        }
        return {};
        
    }
};
