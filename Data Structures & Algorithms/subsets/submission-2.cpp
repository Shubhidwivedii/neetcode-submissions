class Solution {
public:
    void solve(int index,vector<int>& nums,vector<vector<int>>&ans,vector<int>&ds){
        if(index==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[index]);
        solve(index+1,nums,ans,ds);
        ds.pop_back();

        int next=index;
        while(next<nums.size() && nums[next]==nums[index]) next++;

        solve(next,nums,ans,ds);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>ds;
        sort(nums.begin(),nums.end());
        solve(0,nums,ans,ds);
        return ans;
        
    }
};
