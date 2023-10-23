//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string s)
    {
        // Your code here
        stack<int>st;
        for(auto i:s){
            if(isdigit(i)) st.push(i-'0');
            else if(i=='*' or i=='+' or i=='/' or i=='-'){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if(i=='*') st.push(a*b);
                else if(i=='/') st.push(a/b);
                else if(i=='+') st.push(a+b);
                else if(i=='-') st.push(a-b);
            }
        }
        if(!st.empty()) return st.top();
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends