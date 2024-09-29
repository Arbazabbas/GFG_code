//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Should return true if there exists a triplet in the
    // array arr[] which sums to x. Otherwise false
    bool find3Numbers(int arr[], int n, int x) {
       sort(arr,arr+n);
       
      for(int i=0; i<n-2; i++){
          
          int ans = x-arr[i];
          
          int s = i+1;
          int e = n-1;
          while(s<e){
          if(arr[s]+arr[e]==ans){
              return 1;
          }
          
          else if(arr[s]+arr[e]<ans){
              s++;
          }
          else{
              e--;
          }
      }
      }
      return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, X;
        cin >> n >> X;
        int i, A[n];
        for (i = 0; i < n; i++)
            cin >> A[i];
        Solution ob;
        cout << ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends