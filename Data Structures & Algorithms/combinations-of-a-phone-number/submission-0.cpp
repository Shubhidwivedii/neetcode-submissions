class Solution {
public:
    void solve(int index,unordered_map<int,string>mpp,string digits,vector<string>&ans,string s){
        if(index==digits.size()){
            ans.push_back(s);
            return;
        }
        int n=digits[index]-'0';
        for(auto c:mpp[n]){
            s.push_back(c);
            solve(index+1,mpp,digits,ans,s);
            s.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty())
            return {};
        unordered_map<int,string>mpp;
        mpp[2]="abc";
        mpp[3]="def";
        mpp[4]="ghi";
        mpp[5]="jkl";
        mpp[6]="mno";
        mpp[7]="pqrs";
        mpp[8]="tuv";
        mpp[9]="wxyz";
        vector<string>ans;
        string s="";
        solve(0,mpp,digits,ans,s);
        return ans;

        
    }
};
