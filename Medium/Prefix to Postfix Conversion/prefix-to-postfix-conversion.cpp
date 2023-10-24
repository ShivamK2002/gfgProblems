//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToPost(string exp) {
        stack<string>st;
        reverse(exp.begin(),exp.end());
        for(auto i:exp){
            if(isalnum(i)){
                string temp = "";
                temp+=i;
                st.push(temp);
            }
            else{
                string str1 = st.top();
                st.pop();
                string str2 = st.top();
                st.pop();
                st.push(str1+str2+i);
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
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToPost(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends