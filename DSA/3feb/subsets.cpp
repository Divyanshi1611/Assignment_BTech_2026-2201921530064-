//https://leetcode.com/problems/subsets/submissions/1530070500/?envType=problem-list-v2&envId=array
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int k=pow(2,n);
        vector<vector<int>> ans(k);
        for(int num=0;num<k;num++){
            vector<int> r;
            for(int i=0;i<n;i++){
                if(num &(1<<i)){
                    r.push_back(nums[i]);
                }
            }
            ans[num]=r;
        }
        
       
       return ans;
    }
};