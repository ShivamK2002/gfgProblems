//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string S)
	{
	   int sum = 0;
	   int maxi = -1;
	   int count1=  0;
	   int count0=  0;
	   
	   for(auto i:S){
	       if(i=='0') count0++;
	       else if(i=='1') count1++;
	       sum = count0-count1;
	       if(sum<0) {
	           count0=0;
	           count1=0;
	       }
	       if(sum>maxi){
	        maxi = max(sum,maxi);
	       }
	   }
	   return maxi;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends