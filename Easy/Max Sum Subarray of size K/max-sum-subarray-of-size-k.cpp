//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &arr , int N){
        long ans  = 0;
        int i=0;
        int j = 0;
            long sum = 0 ;  
            
        while(j<K){
            sum+=arr[j++];
        }
            ans = max(ans,sum);
            
        while(j<N){

            sum-=arr[i++];
            sum+=arr[j++];
            
            ans = max(ans,sum);
            
            
            
            
        }
        
        
        
        
        
        
        
        
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
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends