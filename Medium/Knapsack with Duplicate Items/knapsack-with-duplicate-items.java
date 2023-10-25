//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            String line1[] = in.readLine().trim().split("\\s+");
            int N = Integer.parseInt(line1[0]);
            int W = Integer.parseInt(line1[1]);
            String line2[] = in.readLine().trim().split("\\s+");
            int val[] = new int[N];
            for(int i = 0;i < N;i++)
                val[i] = Integer.parseInt(line2[i]);
            String line3[] = in.readLine().trim().split("\\s+");
            int wt[] = new int[N];
            for(int i = 0;i < N;i++)
                wt[i] = Integer.parseInt(line3[i]);
                
            Solution ob = new Solution();
            System.out.println(ob.knapSack(N, W, val, wt));
        }
    }
}
// } Driver Code Ends


//User function Template for Java
class Solution{
    public int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        /*
        this is just knapsack but with dupliates
        let dp(i) define the maximum profit we can get with current weight
        if start from 0
        if i == W, return 0
        then for this current weight (we try taking) as many as we can of each item
        
        */
        int[] memo = new int[W+1];
        for (int i = 0; i <= W; i++){
            memo[i] = -1;
        }
        
        return dp(0,W,N,val,wt,memo);
    }
    public int dp(int curr_weight, int W, int N, int[] val, int[] wt, int[] memo){
        if (curr_weight == W){
            return 0;
        }
        
        if (memo[curr_weight] != -1){
            return memo[curr_weight];
        }
        
        int ans = 0;
        for (int i = 0; i < N; i++){
            if (curr_weight + wt[i] <= W){
                ans = Math.max(ans, val[i] + dp(curr_weight + wt[i], W, N, val, wt, memo));
            }
        }
        
        memo[curr_weight] = ans;
        return ans;
    }

}