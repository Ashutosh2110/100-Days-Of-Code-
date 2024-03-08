//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
bool sameFreq(string s)
{
    map<char,int> hash;
    int a = -1;
    int b = -1;
    for(auto it:s){
        hash[it]++;
        a = hash[it];
    }
    int count = 0 , count1 = -1 , flag = 1;
    for(auto it:hash){
        if(it.second!=a){
            b = it.second;
            if((it.second == 1 || it.second-1==a) && count1 == -1){
                count1 = 1;
            }
            else{
                flag = 0;
            }
        }
        else{
            count++;
        }
    }
    if(count >= hash.size()-1 && flag==1){
        return 1;
    }
    count = 0 , count1 = -1 , flag = 1;
    for(auto it:hash){
        if(it.second!=b){
            if((it.second == 1 || it.second-1==b) && count1 == -1){
                count1 = 1;
            }
            else{
                return 0;
            }
        }
        else{
            count++;
        }
    }
    if(count >= hash.size()-1){
        return 1;
    }
    return 0;
}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends