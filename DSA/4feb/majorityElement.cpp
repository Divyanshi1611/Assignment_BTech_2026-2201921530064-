//https://leetcode.com/problems/majority-element-ii/submissions/1530685113/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        int k=floor(n/3);
        unordered_map<int,int> m1;
        for(int i=0;i<n;i++){
            m1[nums[i]]++;
        }
        for(auto x:m1){
            if(x.second>k){
                ans.push_back(x.first);

            }
        }
        return ans;
    }
};