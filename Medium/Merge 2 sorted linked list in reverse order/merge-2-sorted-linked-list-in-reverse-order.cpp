//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};

void print(struct Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->next;
    }
}


Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    return temp;
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
};

*/
class Solution
{
    public:
    
    void reverseList(Node* &head){
        Node* prev = NULL;
        Node* curr = head;
        Node* forw = NULL;
        
        while(curr!=NULL){
            forw  = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
        }
        head = prev;
    }
    
    void createList(Node* &head, Node* &tail, int val){
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = NULL;
        
        if(head==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        return;
    }
    
    struct Node * mergeResult(Node *node1,Node *node2)
    {
    //   if(!node1) return node2;
    //   else if(!node2) return node1;
    //   else if(!node1 and !node2) return NULL;
       
       Node* temp1 = node1;
       Node* temp2 = node2;
       Node* head = NULL;
       Node* tail = NULL;
       
       while(temp1!=NULL and temp2!=NULL){
           if(temp1->data <= temp2->data) {
               createList(head,tail,temp1->data);
               temp1= temp1->next;
           } 
           else{
               createList(head,tail,temp2->data);
               temp2= temp2->next;
           }
       }
       
       while(temp1!=NULL){
           createList(head,tail,temp1->data);
           temp1 = temp1->next;
       }
       
       while(temp2!=NULL){
           createList(head,tail,temp2->data);
           temp2 = temp2->next;
       }
       
       reverseList(head);
       
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
        int nA;
        cin>>nA;
        int nB;
        cin>>nB;

        struct Node* headA=NULL;
        struct Node* tempA = headA;

        for(int i=0;i<nA;i++)
        {
            int ele;
            cin>>ele;
            if(headA==NULL)
            {
                headA=tempA=newNode(ele);

            }else{
                tempA->next = newNode(ele);
				tempA=tempA->next;
            }
        }

        struct Node* headB=NULL;
        struct Node* tempB = headB;


        for(int i=0;i<nB;i++)
        {
            int ele;
            cin>>ele;
            if(headB==NULL)
            {
                headB=tempB=newNode(ele);

            }else{
                tempB->next = newNode(ele);
				tempB=tempB->next;
            }
        }
        
        Solution ob;
        struct Node* result = ob.mergeResult(headA,headB);

        print(result);
        cout<<endl;


    }
}

// } Driver Code Ends