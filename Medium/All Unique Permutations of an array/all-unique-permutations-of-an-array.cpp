//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void solve(vector<int>arr,int n, set<vector<int>>&ans,vector<bool>&visited,vector<int>temp,int index){
        
        if(index>=n){
             ans.insert(temp);
             return;
        }
        
        for(int i=0; i<n; i++){
            if(!visited[i]){
                visited[i]  = true;
                temp.push_back(arr[i]);
                solve(arr,n,ans,visited,temp,index+1);
                temp.pop_back();
                visited[i]  = false;
                
            }
        }
        
        
        
        
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        sort(arr.begin(),arr.end());
        vector<bool>visited(n,false);
        vector<int>temp;
        set<vector<int>>ans;
        solve(arr,n,ans,visited,temp,0);
        
        vector<vector<int>>res;
        for(auto i:ans) res.push_back(i);
        
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends