class Solution {
public:
    void combination(int index,vector<int>& nums, int target,vector<vector<int>>&ans,vector<int>&ds){
        if(index==nums.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(nums[index]<=target){
            ds.push_back(nums[index]);
            combination(index,nums,target-nums[index],ans,ds);
            ds.pop_back();
        }
        combination(index+1,nums,target,ans,ds);

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        combination(0,nums,target,ans,ds);
        return ans;
    }
};
