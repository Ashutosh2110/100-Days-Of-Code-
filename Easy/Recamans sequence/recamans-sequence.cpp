//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> recamanSequence(int n){

        unordered_map<int,int>mp;

        vector<int>dp(n,0);

        dp[0]=0;

        mp[0]++;

        for(int I=1;I<n;I++) {

            int num=dp[I-1]-I;

            if(num>=0 and mp.find(num)==mp.end()){

                dp[I]=dp[I-1]-I;

                mp[num]=1;

            }

            else{

                dp[I]=dp[I-1]+I;

                mp[dp[I-1]+I]=1;

            }

        }

        return dp;

    }

};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<int> ans = ob.recamanSequence(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends