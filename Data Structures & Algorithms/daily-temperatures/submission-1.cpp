class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int>st;
        unordered_map<int,int>nge;
        int n=temperatures.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                st.pop();
            }
            if(st.empty()) nge[i]=0;
            else{
                nge[i]=st.top()-i;
            }
            st.push(i);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(nge[i]);
            st.pop();
        }
        return ans;
        
    }
};
