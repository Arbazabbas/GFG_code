//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        vector <int> ans;
        int n=arr.size();
        unordered_map <int,int> mp;
        for(int e:arr)mp[e]++;
        for(auto e:mp){
            if(e.second==2){
                ans.push_back(e.first);
                break;
            }   
        }    
        for(int i=1;i<=n;i++){
           if(mp.find(i)==mp.end()){
               ans.push_back(i);
               break;
           }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends