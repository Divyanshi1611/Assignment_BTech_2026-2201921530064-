//https://leetcode.com/problems/pascals-triangle/description/?envType=problem-list-v2&envId=array
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pat(numRows); 
        
        for (int i = 0; i < numRows; i++) {
            pat[i].resize(i + 1);  
            pat[i][0] = pat[i][i] = 1;  
            
            for (int j = 1; j < i; j++) {
                
                pat[i][j] = pat[i-1][j-1] + pat[i-1][j];
            }
        }
        
        return pat;
    }
};
