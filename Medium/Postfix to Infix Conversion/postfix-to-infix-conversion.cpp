//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToInfix(string exp) {
        // string ans = "";
        stack<string>st;
        
                string temp = "";
        for(auto i:exp){
            if(isalnum(i)){
                temp = "";
                temp+=i;
                st.push(temp);
            }
            else {
                string ch2 = st.top();
                st.pop();
                string ch1 = st.top();
                st.pop();
                
                st.push("(" + ch1 + i + ch2 + ")");
                
            }
            
        }
        if(!st.empty()) return st.top();
        return "";
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;
        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToInfix(postfix) << endl;

        // cout << "~\n";
    }
    fclose(stdout);

    return 0;
}

// } Driver Code Ends