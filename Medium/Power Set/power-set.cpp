//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    
	    void solve(string s, vector<string>&ans,int index, string temp){
	        if(index>=s.size()){
	            if(temp.size()>0)ans.push_back(temp);
	            return;
	        }
	        
	            temp+=s[index];
	            solve(s,ans,index+1,temp);
	            temp.pop_back();
	            solve(s,ans,index+1,temp);
	            
	        
	    }
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans;
		    solve(s,ans,0,"");
		    sort(ans.begin(),ans.end());
		    
		   
		    
		    return ans;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends