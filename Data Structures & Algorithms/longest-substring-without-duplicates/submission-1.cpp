class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0,l=0,maxlen=0;
        unordered_map<char,int>mpp;
        while(r<s.size()){
            if(mpp.find(s[r])!=mpp.end()){
                if(l<=mpp[s[r]]){
                    l=mpp[s[r]]+1;
                }
            }
            mpp[s[r]]=r;
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};
