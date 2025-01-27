//https://leetcode.com/problems/reverse-pairs/description/
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int revPair = 0;
        int n = nums.size();
        vector<int> sortedNums;

        for (int i = n - 1; i >= 0; i--) {
            auto it = lower_bound(sortedNums.begin(), sortedNums.end(), nums[i] / 2.0);
            revPair += it - sortedNums.begin();
            sortedNums.insert(upper_bound(sortedNums.begin(), sortedNums.end(), nums[i]), nums[i]);
        }

        return revPair;
    }
};
