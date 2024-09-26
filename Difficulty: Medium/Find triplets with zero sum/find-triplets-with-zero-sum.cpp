//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
      sort(arr,arr+n);
      
      for(int lt=0; lt<n; lt++){
          
          int rt=n-1;
          int mid=lt+1;
          while(mid<rt){
          int sum=arr[lt]+arr[mid]+arr[rt];
          if(sum==0){
              return true;
          }
          else if(sum>0){
              rt--;
          }
          else{
              mid++;
          }
      }}
      return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends