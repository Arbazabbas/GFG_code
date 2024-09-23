//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void print(Node* root) {
    Node* temp = root;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


// } Driver Code Ends
/*
 
The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *compute(Node *head) {
       
       if(head->next == NULL){
           return head;
       }
       
       Node *prev=NULL,*curr=head,*fut=head->next;
       while(fut){
           curr->next = prev;
           prev = curr;
           curr = fut;
           fut = fut->next;
       }
       curr->next = prev;
       head = curr;
       
       Node *max = head;
       curr = head->next;
       while(curr){
           if(curr->data < max->data){
               curr = curr->next;
               max->next=curr;
           }else{
               max = curr;
               curr = curr->next;
           }
       }
       
       
       prev = NULL, curr=head,fut=head->next;
       while(fut){
           curr->next = prev;
           prev = curr;
           curr = fut;
           fut = fut->next;
       }
       curr->next = prev;
       head = curr;
       
       return head;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }
        Solution ob;
        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Node* result = ob.compute(head);
        print(result);
        cout << endl;
    }
}

// } Driver Code Ends