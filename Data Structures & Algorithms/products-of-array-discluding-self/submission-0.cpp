class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefixprod=1;
        int suffixprod=1;
        vector<int>ans(nums.size());
        
        for(int i=0;i<nums.size();i++){
            ans[i] =prefixprod;
            prefixprod *=nums[i];
        }      
        for(int i=nums.size()-1;i>=0;i--){
            ans[i] *=suffixprod;
            suffixprod *=nums[i];
        }
        return ans;

    }
};
