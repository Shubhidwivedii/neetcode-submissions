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
            combination(index+1,nums,target-nums[index],ans,ds);
            ds.pop_back();
        }
        int next=index;
        while(next<nums.size() && nums[next]==nums[index]) next++;
        combination(next,nums,target,ans,ds);

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(candidates.begin(),candidates.end());
        combination(0,candidates,target,ans,ds);
        return ans;
        
    }
};
