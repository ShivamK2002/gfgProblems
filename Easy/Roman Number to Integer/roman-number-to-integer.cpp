//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        map<char,int>mpp;
    mpp['I'] = 1;
    // mpp["IV"] = 4;
    mpp['V'] = 5;
    // mpp["IX"] = 9;
    mpp['X'] = 10;
    // mpp["XL"] = 40;
    mpp['L'] = 50;
    // mpp["XC"] = 90;
    mpp['C'] = 100;
    // mpp["CD"] = 400;
    mpp['D'] = 500;
    // mpp["CM"] = 900;
    mpp['M'] = 1000;

    int n = str.size();

    int ans = mpp[str[n-1]];
    for(int i=n-2; i>=0; i--){
        if(mpp[str[i]]>=mpp[str[i+1]]) ans+=mpp[str[i]];
        else if(mpp[str[i]]<mpp[str[i+1]]) ans-=mpp[str[i]];
        
    }

return ans;




      }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends