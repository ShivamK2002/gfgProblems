//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	    void solve(set<string>&ans,string S,int n, int i){
	        if(i>=n){
	            ans.insert(S);
	            return;
	        }
	        
	        
	        for(int j=i; j<n; j++){
	            swap(S[i],S[j]);
	            solve(ans,S,n,i+1);
	            swap(S[i],S[j]);
	        }
	    }
		vector<string>find_permutation(string S)
		{
		    set<string>ans;
		    int n = S.size();
		    
		    solve(ans,S,n,0);
		    
		    vector<string>finalAns;
		    
		    for(auto i:ans){
		        finalAns.push_back(i);
		    }
		    return finalAns;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends