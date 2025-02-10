//https://leetcode.com/problems/sum-of-subarray-minimums/submissions/1538311325/
class Solution {
    public:
        vector<int> findPse(vector<int>& arr){
            int n=arr.size();
            vector<int> pse(n);
            stack<int> st;
            
            for(int i=0;i<n;i++){
                while(!st.empty() && arr[st.top()]>arr[i]){
                    st.pop();
                    
                    
                }
                pse[i]=st.empty()?-1:st.top();
                st.push(i);
            }
            return pse;
    
        }
        vector<int> findNse(vector<int>& arr){
            int n=arr.size();
            vector<int> nse(n);
            stack<int> st;
            
            for(int i=n-1;i>=0;i--){
                while(!st.empty() && arr[st.top()]>=arr[i]){
                    st.pop();
                   
                    
                }
                nse[i]=st.empty()?n:st.top();
                st.push(i);
            }
            return nse;
    
        }
        int sumSubarrayMins(vector<int>& arr) {
            int n=arr.size();
            vector<int> nse=findNse(arr);
            vector<int> pse=findPse(arr);
            int total=0;
            int mod=(int)(1e9+7);
            int left,right;
            for(int i=0;i<arr.size();i++){
                left=i-pse[i];
                right=nse[i]-i;
                total=(total+(right*left*1ll*arr[i])%mod)%mod;
    
            }
            return total;
            
        }
    };