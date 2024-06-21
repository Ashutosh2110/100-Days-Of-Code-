//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        string str1, str2, str3, str4;
        int i = 0;
        while(str[i] != '/'){
            str1 += str[i++];
        }
        i++;
        while(str[i] != ','){
            str2 += str[i++];
        }
        i += 2;
        while(str[i] != '/'){
            str3 += str[i++];
        }
        i++;
        while(str[i] != '\0'){
            str4 += str[i++];
        }
        
        double d1 = stod(str1) / stod(str2);
        double d2 = stod(str3) / stod(str4);
        
        if(d1 > d2)
            return str1+'/'+str2;
            
        else if(d1 < d2)
            return str3+'/'+str4;
            
        else    
            return "equal";
            
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends