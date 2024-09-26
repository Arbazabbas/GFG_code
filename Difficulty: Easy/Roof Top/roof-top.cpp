//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
          int curr=0,max_curr=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1]){
                curr++;
            }
           else{
               if(curr>max_curr){
                   max_curr=curr;
               }
               curr=0;
           }
        }
        if(curr>max_curr){
                   max_curr=curr;
               }
        
        return max_curr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        cout << ob.maxStep(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends