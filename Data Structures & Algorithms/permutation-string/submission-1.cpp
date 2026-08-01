class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l=0;
        int r=0;
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for( auto num:s1) freq1[num]++;
        while(r<s2.size()){
            freq2[s2[r]]++;
            if(r-l+1>s1.size()){
                freq2[s2[l]]--;
                if(freq2[s2[l]]==0) freq2.erase(s2[l]);
                l++;
            }
            if(freq1==freq2) return true;
            r++;
        }
        return false;
    }
};
