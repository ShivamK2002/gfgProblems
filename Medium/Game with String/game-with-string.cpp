//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        int n = s.size();
        if(n<=k) return 0;
        
        unordered_map<char,int>mpp;
        for(auto i:s) mpp[i]++;
        priority_queue<pair<int,char>>pq;
        for(auto i:mpp) pq.push({i.second,i.first});
        while(k--){
            int val = pq.top().first;
            char ch = pq.top().second;
            if(val>0) val--;
            pq.pop();
            if(val>0){
                pq.push({val,ch});
            }
            
            
        }
        int res = 0;
        
        while(!pq.empty()){
            int ele = pq.top().first;
            res += (ele*ele);
            pq.pop();
        }
        
        
        
        return res;
    
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends