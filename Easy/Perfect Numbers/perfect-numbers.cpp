//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int isPerfectNumber(long long N) {
        if(N==1) return 0;
        long long sum = 0;
        for( int i=1; i<=sqrt(N); i++){
            if(N%i==0) {
                sum+=i;
                if (i != N / i && i!=1) {
                    sum += N / i;
                }
            }
        }
        // cout<<sum<<endl;
        if(sum==N) return 1;
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.isPerfectNumber(N) << endl;
    }
    return 0;
}
// } Driver Code Ends