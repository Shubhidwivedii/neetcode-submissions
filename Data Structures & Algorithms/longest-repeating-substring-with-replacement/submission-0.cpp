class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,len=0;
        unordered_map<char,int>freq;
        int maxfreq=0;
        while(r<s.size()){
            freq[s[r]]++;
            maxfreq=max(maxfreq,freq[s[r]]);
            if(r-l+1-maxfreq>k){
                freq[s[l]]--;
                if(freq[s[l]]==0) freq.erase(s[l]);
                l++;
            }
            len=max(len,r-l+1);
            r++;
        }
        return len;

        
    }
};
