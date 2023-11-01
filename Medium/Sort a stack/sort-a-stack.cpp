//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */


void insertAtCorrect(stack<int>&st, int val){
    if(st.empty() or st.top()<=val ) { st.push(val); return ;}
    int num = st.top();
    st.pop();
    insertAtCorrect(st,val);
    st.push(num);
    
 
}

void solve(stack<int>&s){

    if(s.size()<=0) return;
    int top = s.top();
    s.pop();
    solve(s);
    insertAtCorrect(s,top);
    
    
}
void SortedStack :: sort()
{
   //Your code here
//   stack<int>s;
   solve(s);
}