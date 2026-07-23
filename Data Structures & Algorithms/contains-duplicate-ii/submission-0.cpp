class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int r=0;
        unordered_map<int,int>mpp;
        while(r<nums.size()){
            if(mpp.find(nums[r])!=mpp.end()){
                if(r-mpp[nums[r]]<=k) return true;
            }
            mpp[nums[r]]=r;
            r++;
        }
        return false;
        
    }
};