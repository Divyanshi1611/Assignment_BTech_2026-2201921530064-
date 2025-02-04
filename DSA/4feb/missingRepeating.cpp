//https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=find-missing-and-repeating
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
    
    
        int n = arr.size();
        vector<int> ans(2);
        map<int, int> m1;
        for (int i = 0; i < n; i++) m1[arr[i]]++;
        for (int i = 1; i <= n; i++) {
            if (m1[i] == 2) ans[0] = i;
            if (m1[i] == 0) ans[1] = i;
        }
        return ans;
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends