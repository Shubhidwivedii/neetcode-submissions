class Solution {
public:
    void solve(int i,vector<int>& nums,vector<vector<int>>&ans,vector<int>&ds){
        if(i==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        solve(i+1,nums,ans,ds);
        ds.pop_back();
        int next=i;
        while(next<nums.size() && nums[next]==nums[i]) next++;
        solve(next,nums,ans,ds);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        int index=0;
        sort(nums.begin(),nums.end());
        solve(index,nums,ans,ds);
        return ans;
        
    }
};
