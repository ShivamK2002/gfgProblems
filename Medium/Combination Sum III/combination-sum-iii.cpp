//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    void solve(int N, int K, int sum,vector<int>temp,vector<vector<int>>&ans,int index){
        if(K<=0 or sum>=N){
            if(sum==N and K==0) {
                sort(temp.begin(),temp.end());
                if(ans.empty()) ans.push_back(temp);
                else if(ans.back()!=temp)ans.push_back(temp);
                
                }
            return;
        }
        for(int i=index; i<=9; i++){
            sum+=i;
            temp.push_back(i);
            solve(N,K-1,sum,temp,ans,i+1);
            temp.pop_back();
            sum-=i;
                
            
        }
    }
    vector<vector<int>> combinationSum(int K, int N) {
        vector<vector<int>>ans;
        vector<int>temp;
       solve(N,K,0,temp,ans,1);
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends