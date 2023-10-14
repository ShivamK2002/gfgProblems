//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = new Node(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the nodes that are common in both BST.
     
    void solve2(Node* root2, set<int>&tree2){
        if(!root2) return;
        tree2.insert(root2->data);
        if(root2->left) solve1(root2->left,tree2);
        if(root2->right) solve1(root2->right,tree2);
    
    }
    void solve1(Node* root1, set<int>&tree1){
        if(!root1) return;
        tree1.insert(root1->data);
        if(root1->left) solve1(root1->left,tree1);
        if(root1->right) solve1(root1->right,tree1);
    
    }
    vector <int> findCommon(Node *root1, Node *root2)
    {
        set<int>tree1;
        set<int>tree2;
        
        solve1(root1,tree1);
        solve2(root2,tree2);
        
        // for(auto i:tree1) cout<<i<<" ";
        // for(auto i:tree2) cout<<i<<" ";
        vector<int>ans;
        for(auto i:tree1){
            if(tree2.find(i)!=tree2.end()) ans.push_back(i);
        }
        // int n = tree1.size();
        // int m = tree2.size();
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};




//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root1 = buildTree(s);

        getline(cin,s);
        Node* root2 = buildTree(s);
        Solution ob;
        vector <int> res = ob.findCommon(root1, root2);
        for (int i : res)
            cout << i << " ";
        cout<< endl;
    }

	return 1;
}
// } Driver Code Ends