//https://leetcode.com/problems/next-greater-element-i/description/
class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
            stack<int> st;
            map<int, int> ngeMap;
            vector<int> ans;
            for (int i = nums2.size() - 1; i >= 0; i--) {
                while (!st.empty() && st.top() <= nums2[i]) st.pop();
                ngeMap[nums2[i]] = st.empty() ? -1 : st.top();
                st.push(nums2[i]);
            }
            for (int num : nums1) ans.push_back(ngeMap[num]);
            return ans;
        }
    };
    