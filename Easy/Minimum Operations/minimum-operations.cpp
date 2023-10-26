//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
 public:
    int minOperation(int n)
    {
        //IG: @modest_azad
        // I used reversed approach(fron N to 0)
        int minCount = 0;
        while(n!=0){
            if(n % 2 == 0){
                n = n / 2;
                minCount++;
            }
            else {
                n = n - 1;
                minCount++;
            }
    }
        return minCount;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}
// } Driver Code Ends