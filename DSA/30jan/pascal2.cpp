//https://leetcode.com/problems/pascals-triangle-ii/?envType=problem-list-v2&envId=array
class Solution {
public:
    vector<int> getRow(int rowIndex) {
       
        vector<vector<int>> pat(rowIndex+1); 
       
        for (int i = 0; i < rowIndex+1; i++) {
            pat[i].resize(i + 1);  
            pat[i][0] = pat[i][i] = 1;  
            
            for (int j = 1; j < i; j++) {
                
                pat[i][j] = pat[i-1][j-1] + pat[i-1][j];
            }
            
        }
        return pat[rowIndex];
        

       
        
    }
};