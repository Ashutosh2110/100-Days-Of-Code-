//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int arr[], int n) {
            long long int sum=0;

        long long int consum=0;

        

        for(long long int i=0;i<n;i++){

            sum+=arr[i];

            consum+=(i*arr[i]);

        }

        long long int res=consum;

        for(long long int i=1;i<n;i++){

            consum=consum-(sum-arr[i-1])+(long long int)(arr[i-1])*(n-1);

            res=max(res,consum);

        }

        return res;

    }
};    

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends