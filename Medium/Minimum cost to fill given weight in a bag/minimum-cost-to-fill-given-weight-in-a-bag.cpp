//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
  int N;
    int solve(int w, vector<int> &cost, vector<int> &dp) {
        if(dp[w] != 0) return dp[w];
        int ans = INT_MAX;
        if(w <= N && cost[w-1] != -1) ans = cost[w-1];
        for(int i = w-1; i >= (w+1)/2; i--) {
            int tmp1 = solve(i, cost, dp);
            int tmp2 = solve(w-i, cost, dp);
            if(tmp1 == INT_MAX || tmp2 == INT_MAX) continue;
            ans = min(ans, tmp1+tmp2);
        }
        return dp[w] = ans;
    }
    
    int minimumCost(int n, int w, vector<int> &cost) {
        N = n;
        vector<int> dp(w+1, 0);
        int ans = solve(w,cost,dp);
        if(ans == INT_MAX) ans = -1;
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int w;
        scanf("%d", &w);

        vector<int> cost(n);
        Array::input(cost, n);

        Solution obj;
        int res = obj.minimumCost(n, w, cost);

        cout << res << endl;
    }
}

// } Driver Code Ends