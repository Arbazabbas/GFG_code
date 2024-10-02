//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
   void rotate(vector<int> &arr, int n) {
        int ele = arr[n-1]; 
        for (int i = n-1; i > 0; i--) {
            arr[i] = arr[i-1]; 
        }
        arr[0] = ele;
    }

    
    void del(vector<int> &arr, int k, int n) {
        auto it = arr.begin() + n - k;
        arr.erase(it); 
    }
    int rotateDelete(vector<int> &arr) {
          int n = arr.size();
        for (int i = 0; i < n; i++) {
            rotate(arr, n);
            del(arr, i+1, n); 
            n = n - 1; 
            if (n == 0)
                break;
        }
        return arr[0];
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.rotateDelete(arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends