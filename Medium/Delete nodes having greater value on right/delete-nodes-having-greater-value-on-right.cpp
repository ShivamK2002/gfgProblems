//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
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
    bool isMax(Node* temp) {
        Node* comp = temp->next; // Start comparison from the next node
        while (comp != NULL) {
            if (comp->data > temp->data) {
                return true;
            }
            comp = comp->next;
        }
        return false;
    }

    Node* compute(Node* head) {
        Node* temp = head;
        Node* prev = NULL;
        Node* start = NULL;
        int count = 0;
        while (temp != NULL) {
            if (isMax(temp)) {
                if (prev != NULL) {
                    prev->next = temp->next;
                } else {
                    head = temp->next;
                }
                count++;
                if (count == 1) {
                    start = temp->next; // Update the start if the first node is removed
                }
                temp = temp->next; // Move temp forward after removal
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
        return head;
    }
};

   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends