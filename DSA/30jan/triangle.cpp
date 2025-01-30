//https://leetcode.com/problems/triangle/submissions/1525703667/?envType=problem-list-v2&envId=array
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        vector<int> dp = triangle[m-1]; 
        
        for (int i = m - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                dp[j] = triangle[i][j] + min(dp[j], dp[j+1]);
            }
        }
        
        return dp[0];
    }
};
