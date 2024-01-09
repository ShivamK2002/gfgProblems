//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        
        {
            vector<int>ans;
            int m = pat.size();
            int n = txt.size();
            
            int i = 0;
    
            while(i<n){
                int j = 0;
                string temp = "";
                
                int k = i;
                while(j<m and k<n){
                    if(pat[j]!=txt[k]) break;
                    temp+=pat[j];
                    j++;
                    k++;
                }
                
                if(temp==pat) {
                    
                    ans.push_back(k-pat.size()+1);
                }
                
                i++;
                
                
            }
            
            
            return ans;
            
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends