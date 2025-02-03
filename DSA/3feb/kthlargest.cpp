//https://leetcode.com/problems/kth-largest-element-in-an-array/description/?envType=problem-list-v2&envId=array
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(i==k-1){
                return pq.top();
            }
            pq.pop();
        }
        return -1;

        
    }
};