//https://leetcode.com/problems/valid-palindrome/description/
class Solution {
public:
    bool isPalindrome(string s) {
        string check = "";
        for (char c : s) if (isalnum(c)) check += tolower(c);
        string check2 = check;
        reverse(check.begin(), check.end());
        return check == check2;
        


        
        
    }
};