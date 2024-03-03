//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	
	static bool cmp(string a , string b){
	    
	    string num1 = a+b;
	    string num2 = b+a;
	    

	    return num1>num2;
	}
	
	string printLargest(int n, vector<string> &arr) {
	    // code here
	    string ans  = "";
	    
	   // sort(arr.begin(),arr.end());
	    sort(arr.begin(),arr.end(),cmp);
	   // reverse(arr.begin(),arr.end());
	    for(auto i:arr) ans+=i;
	    
	    
	    return ans;
	}
	
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(n, arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends