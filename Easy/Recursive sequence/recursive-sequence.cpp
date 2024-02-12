//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        long long MOD = 1000000007;
        long long ans = 0;
        int mul = 1;
        for(int i=1; i<=n; i++){
            int k = i;
            long long prod = 1;
            while(k--){
                prod = (prod *mul)%MOD;
                mul++;
            }
            ans = ans+prod%MOD;
        }
        return ans%MOD;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends