class Solution {
public:
    bool ispalindrome(string &temp){
        int i=0,j=temp.size()-1;
        while(i<j){
            if(temp[i]!=temp[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void solve(int index,string s,vector<vector<string>>&ans,vector<string>&ds){
        if(index==s.size()){
            ans.push_back(ds);
            return;
        }
        string temp="";
        for(int i=index;i<s.size();i++){
            temp +=s[i];
            if(ispalindrome(temp)){
                ds.push_back(temp);
                solve(i+1,s,ans,ds);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>ds;
        solve(0,s,ans,ds);
        return ans;
        
        
    }
};
