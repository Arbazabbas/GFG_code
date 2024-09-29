//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
       if(n == 0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  int fib = 1;
  int fib1 = 1;
  int mod = 1000000007;
  for(int i=3;i<=n;i++){
    int r = (fib + fib1) % mod;
    fib = fib1;
    fib1 = r;
  }
  return fib1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends