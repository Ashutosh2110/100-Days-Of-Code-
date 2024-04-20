//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
      vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        
        int l=0;
        int r=0;
        
        
        vector<int>sol;
        while(l<n || r<m)
        {
            if(arr1[l]==arr2[r])
            {
                
                
                if(sol.empty() || sol.back()!=arr1[l])
                sol.push_back(arr1[l]);
                l++;
                r++;
            }
            else
            {
                if(arr1[l]>arr2[r])
                {
                    
                 
                    if(r<m && (sol.empty() || sol.back()!=arr2[r] )){
                    sol.push_back(arr2[r]);
                    
                    }
                    r++;
                    
                }
                else
                {
                    
                    
                    
                    if(l<n && (sol.empty() || sol.back()!= arr1[l]) ){
                    sol.push_back(arr1[l]);
                    
                    }
                    l++;
                }
            }
        }
        
        return sol;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends