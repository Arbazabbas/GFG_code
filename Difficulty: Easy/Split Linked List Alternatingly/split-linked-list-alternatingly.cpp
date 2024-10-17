//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
  struct Node *head1=NULL, *head2=NULL, *temp1=NULL, *temp2=NULL;
        
        int c=0;
        
        while(head!=NULL)
        {
            if(c%2==0)
            {
                if(head1==NULL)
                {
                    head1=new Node(head->data);
                    temp1=head1;
                }
                else
                {
                    temp1->next=new Node(head->data);
                    temp1=temp1->next;
                    
                }
                c++;
                head=head->next;
            }
            else
            {
                if(head2==NULL)
                {
                    head2=new Node(head->data);
                    temp2=head2;
                }
                else
                {
                    temp2->next=new Node(head->data);
                    temp2=temp2->next;   
                }
                head=head->next;
                c++;
            }
        }
        vector<Node*> nodevector;
        nodevector.push_back(head1);
        nodevector.push_back(head2);
        
        return nodevector;
    }
};


//{ Driver Code Starts.

void printList(struct Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        struct Node* head = new Node(arr[0]);
        struct Node* tail = head;

        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }

        Solution ob;
        vector<Node*> result = ob.alternatingSplitList(head);
        printList(result[0]);
        printList(result[1]);
    }

    return 0;
}

// } Driver Code Ends