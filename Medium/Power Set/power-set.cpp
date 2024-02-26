//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		void fn(int ind, string& s, vector<string>& arr, int n, string tmp)
        {
            if(ind==n)
                return;
               
           // not pick
           fn(ind+1,s,arr,n,tmp);
            
           // pick
           tmp+=s[ind];
           arr.push_back(tmp);
           fn(ind+1,s,arr,n,tmp);
           tmp.pop_back();
        }
    
        vector<string> AllPossibleStrings(string s){
            // Code here
            int n=s.length();
            vector<string> arr;
            
            fn(0,s,arr,n,"");
            sort(arr.begin(), arr.end());
            
            return arr;
        }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends