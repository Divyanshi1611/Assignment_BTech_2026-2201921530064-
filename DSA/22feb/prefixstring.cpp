//https://leetcode.com/problems/longest-common-prefix/
class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return "";
    
            string ans = "";
            int n = strs.size();
    
            for (int i = 0; i < strs[0].size(); i++) {
                char prefix = strs[0][i];
    
                for (int j = 1; j < n; j++) {
                    if (i >= strs[j].size() || strs[j][i] != prefix) {
                        return ans;
                    }
                }
    
                ans += prefix;
            }
    
            return ans;
        }
    };
    