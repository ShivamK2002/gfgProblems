//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int checkRedundancy(string s) {
        stack<char>st;
        
        for(auto i:s){
            if(i=='(' || i=='+' || i=='-' || i=='*' || i=='/') st.push(i);
            else if(i==')') {
                if(st.top()=='+' || st.top()=='-' || st.top()== '*' || st.top()=='/')
                {
                 while(st.top()!='(') st.pop();
                 st.pop();
                }
                else return 1;
            }
        }
        
        return 0;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        
    
        string s; 
        cin>>s;
        
        Solution obj;
        int res = obj.checkRedundancy(s);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends