//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
         vector <int> search(string pattern, string text)
        {
            //code here.
            int p=pattern.size();
            int t=text.size();
            
            vector<int>len;
            for(int i=0;i<t;i++){
                bool flag=true;
                int j=i;
                for(int k=0;k<p;k++){
                    if(pattern[k]!=text[j]){
                        flag=false;
                        break;
                    }
                    j++;
                }
                if(flag){
                    len.push_back(i+1);
                }
            }
            return len;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends