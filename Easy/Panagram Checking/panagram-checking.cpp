//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    // A-Z is 65-90, and the range for lowercase letters a-z is 97-122.
 bool checkPangram(const std::string& s) {
    std::unordered_set<char> letters;

    for (char c : s) {
        if (isalpha(c)) {
            letters.insert(tolower(c));
        }
    }

    return letters.size() == 26;
}

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends