//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
     void solve(vector<int>&candidates,int target,int index,vector<int>temp,set<vector<int>>&ans){
        if(index==candidates.size()){
            sort(temp.begin(),temp.end());
            if(target==0) ans.insert(temp);
            return;
        }
        if(target>=candidates[index]){
        temp.push_back(candidates[index]);
        solve(candidates,target-candidates[index],index+1,temp,ans);
        temp.pop_back();
        }
        solve(candidates,target,index+1,temp,ans);
    }
    vector<vector<int>> CombinationSum2(vector<int>& candidates, int n,int target) {
        set<vector<int>>ans;
        vector<int>temp;
        solve(candidates,target,0,temp,ans);

        vector<vector<int>>res;
        for(auto i:ans) res.push_back(i);
        return res;
    }
    
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        auto obj=ob.CombinationSum2(arr,n,k);
        for(int i=0;i<obj.size();i++)
        {
            for(int j=0;j<obj[i].size();j++)
            {
                cout<<obj[i][j]<<" ";
            }
            cout<<"\n";
        }
        if(obj.size()==0) cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends