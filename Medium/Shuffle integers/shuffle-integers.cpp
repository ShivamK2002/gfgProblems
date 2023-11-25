//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    int mid = n/2;
	    
	    int i = 0;
	    vector<int> store1;
	    vector<int> store2;
	    for(int i=0; i<mid; i++){
	        store1.push_back(arr[i]);
	    }
	    for(int i=mid; i<n; i++){
	        store2.push_back(arr[i]);
	    }


	    int it = 0;
	    for(int i=0; i<mid; i++){
	        arr[it++] = store1[i];
	        arr[it++] = store2[i];
	    }
	    
	    
	    
	    
	  
	    
	}
		 

};

//{ Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends