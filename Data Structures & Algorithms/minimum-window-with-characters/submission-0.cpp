class Solution {
public:
    string minWindow(string s, string t) {
        int l=0,r=0,count=0,minlen=INT_MAX,sindex=-1;
        int hash[256]={0};
        for(int i=0;i<t.size();i++){
            hash[t[i]]++;
        }
        while(r<s.size()){
            if(hash[s[r]]>0) count++;
            hash[s[r]]--;
            while(count==t.size()){
                if(r-l+1<minlen){
                    minlen=r-l+1;
                    sindex=l;
                }
                hash[s[l]]++;
                if(hash[s[l]]>0) count--;
                l++;
            }
            r++;
        }
        return sindex==-1?"":s.substr(sindex,minlen);
        
        
    }
};