//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    string removeDuplicates(string str) 
    {
       unordered_map<char ,int> mp;
       vector<char>ans;
       string dhage ="";
       for(int i = 0 ; i < str.size();i++)
       {
           if(mp[str[i]]<=0)
           {
               mp[str[i]]++;
               ans.push_back(str[i]);
           }
       }
       
       for(int i =0 ; i< ans.size();i++)
       {
          dhage.push_back(ans[i]);
       }
       return dhage;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends