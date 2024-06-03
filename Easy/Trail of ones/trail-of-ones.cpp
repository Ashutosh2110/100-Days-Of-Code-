//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int m = 1e9+7;
    int solve(int i,int n,bool prev,bool istaken,vector<vector<vector<int>>> &dp){
        if(i==n){
            if(istaken) return 1;
            else return 0;
        }
        
        if(dp[i][prev][istaken]!=-1) return dp[i][prev][istaken];
        
        int ntake = solve(i+1,n,0,istaken,dp)%m;
        int take=0;
        if(prev) take = solve(i+1,n,1,1,dp)%m;
        else take = solve(i+1,n,1,istaken,dp)%m;
        
        return dp[i][prev][istaken]=(take+ntake)%m;
        
    }
    int numberOfConsecutiveOnes(int n) {
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(2,-1)));
        return solve(0,n,0,0,dp)%m;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.numberOfConsecutiveOnes(N) << endl;
    }
    return 0;
}

// } Driver Code Ends