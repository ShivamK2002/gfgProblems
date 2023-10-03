//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string ans = "";
        // long long int res = n/26;
        long long int rem;
        // if(res>0)ans+=char(res+64);
        // cout<<res;
        
        while(n>=1){
            rem = n%26;
            n/=26;
            if(rem==0){
                ans='Z'+ans;
                n--;
            }
        else ans  = char(rem+64)+ans;
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.colName (n) << '\n';
	}
}

// } Driver Code Ends