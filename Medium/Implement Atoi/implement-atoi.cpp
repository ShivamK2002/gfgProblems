//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        bool isNeg = false;
        int ans = 0;
        
        for(auto i:s){
            if(!isdigit(i)){
                if(i!='-') return -1;
                else {
                    if(ans==0)
                    isNeg = true;
                    else return -1; 
                }
            }
            else{
                ans = ans*10+ (int(i)-48);
            }
        }
        
    
        if(isNeg) ans = -ans;
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends