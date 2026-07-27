class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // SORTING
        // if(nums.size()==0) return false;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         return true;
        //     }
        // }
        // return false;

        // HASHMAP
        unordered_map<int,int>freq;
        for(auto c:nums){
            freq[c]++;
            if(freq[c]>1)return true;
        }
        return false;
        
    }
};