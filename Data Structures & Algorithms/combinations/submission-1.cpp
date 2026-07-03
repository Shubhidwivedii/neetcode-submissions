class Solution {
public:
    void combination(int number,int n,int k,vector<vector<int>>&ans,vector<int>&ds){
        if(number==n+1){
            if(k==0){
                ans.push_back(ds);  
            }
            return;
        }
        ds.push_back(number);
        combination(number+1,n,k-1,ans,ds);
        ds.pop_back();
        combination(number+1,n,k,ans,ds);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>ds;
        combination(1,n,k,ans,ds);
        return ans;
        
    }
};