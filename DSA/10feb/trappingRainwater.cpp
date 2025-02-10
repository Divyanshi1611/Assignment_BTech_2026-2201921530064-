//https://leetcode.com/problems/trapping-rain-water/description/
class Solution {
    public:
        int trap(vector<int>& height) {
            int lmax=0;
            int rmax=0;
            int total=0;
            int l=0;
            int r=height.size()-1;
            while(l<r){
                if(height[l]<=height[r]){
                    if(lmax>height[l]){
                        int h=lmax-height[l];
                        total+=h;
                    }
                    else{
                        lmax=height[l];
                    }
                    l++;
    
                }
                else{
                    if(rmax>=height[r]){
                        int g=rmax-height[r];
                        total+=g;
                    }
                    else{
                        rmax=height[r];
                    }
                    r--;
                }
    
            }
            return total;
            
        }
    };