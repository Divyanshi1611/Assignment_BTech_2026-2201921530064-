//https://leetcode.com/problems/largest-rectangle-in-histogram/description/
class Solution {
    public:
        int largestRectangleArea(vector<int>& heights) {
            stack<int> st;
            int maxArea = 0;
    
            for(int i = 0; i < heights.size(); i++) {
                while (!st.empty() && heights[st.top()] > heights[i]) {
                    int heightIndex = st.top();
                    st.pop();
                    int nse = i;
                    int pse = st.empty() ? -1 : st.top();
                    maxArea = max(maxArea, heights[heightIndex] * (nse - pse - 1));
                }
                st.push(i);
            }
    
            while (!st.empty()) {
                int heightIndex = st.top();
                st.pop();
                int nse = heights.size();
                int pse = st.empty() ? -1 : st.top();
                maxArea = max(maxArea, heights[heightIndex] * (nse - pse - 1));
            }
    
            return maxArea;
        }
    };
    