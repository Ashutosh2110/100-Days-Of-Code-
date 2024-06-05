//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {

  public:
     int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        // sort(a,a+n);
        // sort(b,b+m);
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)sum1+=a[i];
        for(int i=0;i<m;i++)sum2+=b[i];
        if((sum2-sum1) % 2 != 0)return -1;
        int diff = sum2 - sum1;
        int target = diff/2;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++)
        {
            map[target + a[i]] = 1;
        }
        for(int i=0;i<n;i++)
        {
            if(map[b[i]] == 1)return 1;
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends