//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int firstElement(int n) {
        // code here
         const int MOD = 1000000007;
         
         int temp1=1;
         int temp2=1;
         int res=0;
         
         //Base case
         if(n==1 || n==2){
             return temp1;
         }
         
         for(int i=3;i<=n;i++)
            {
              res=(temp1+temp2) % MOD;
                temp1=temp2;
                temp2=res;
            }
            return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends