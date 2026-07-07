class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         int n=heights.size();
        int area=0;
        stack<int>st;
        for(int i=0;i<=n;i++){
            while(!st.empty() && (i==n||heights[i]<=heights[st.top()])){
                int element=heights[st.top()];
                st.pop();
                int width;
                if(st.empty()) width=i;
                else{
                    width=i-st.top()-1;
                }
                area=max(area,element*width);
            }
            st.push(i);
        }
        return area;

        
    }
};
