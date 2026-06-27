class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for( auto c:nums){
            res=res^c;
        }
        return res;
        
    }
};
