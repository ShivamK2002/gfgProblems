//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string postToPre(string exp) {
        stack<string> st;
        
        for(auto i:exp){
            if(isalnum(i)){
                string temp = "";
                temp+=i;
                st.push(temp);
            }
            else{
                string str2 = st.top();
                st.pop();
                string str1 = st.top();
                st.pop();
                st.push(i+str1 + str2);
                
            }
        }
        return st.top();
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
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends