//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    
    bool check(int num){
        if(num%8==0) return true;
        return false;
        
    }
    int DivisibleByEight(string s){
        int n  = s.size();
        if(n>3){
           s = s.substr(n-4,n-1);
        }
          return (check(stoi(s)))?1:-1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends