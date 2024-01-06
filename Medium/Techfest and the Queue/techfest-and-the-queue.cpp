//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:

    void primeFactors(int num,vector<int>&ans){
    while(num%2==0) {
        ans.push_back(2);
        num/=2;
    }
    for(int i=3; i<=sqrt(num);i+=2){
        while(num%i==0) {
            ans.push_back(i);
            num/=i;
        }
    }
    if(num>1) ans.push_back(num);
}

	int sumOfPowers(int a, int b){

	    int sum = 0;
	    vector<int>ans;
	    for(int i=a; i<=b; i++){
	        primeFactors(i,ans);
	    }
	   // for(auto i:ans) cout<<i<<endl;
	    return ans.size();
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends