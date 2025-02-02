//https://leetcode.com/problems/reverse-string/submissions/1528823426/?envType=problem-list-v2&envId=two-pointers
class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }

        
    }
};