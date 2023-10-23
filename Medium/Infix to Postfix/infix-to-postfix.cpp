//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int prec(char ch){
        if(ch=='^') return 3;
        else if(ch=='*' || ch=='/') return 2;
        else if(ch=='+' || ch=='-') return 1;
        return -1;
    }
    string infixToPostfix(string s) {
        stack<char>st;
        string res ="";
        for(auto i:s){
            if((i>='a' and i<='z') or (i>='A' and i<='Z') or(i>='0' and i<='9') ) res.push_back(i);
            else if(i=='(') st.push(i);
            else if(i==')'){
                while(!st.empty() and st.top()!='('){
                    res+=st.top();
                    st.pop();
                }
                if(!st.empty())st.pop();
            }
            else {
                while(!st.empty() and prec(st.top())>=prec(i) ) {
                    res+=st.top();
                    st.pop();
                }
                st.push(i);
            }
        }
        while(!st.empty()){
            res+=st.top(); 
            st.pop();
        }   
        return res;
    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    }
    return 0;
}

// } Driver Code Ends