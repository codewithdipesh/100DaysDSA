//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i = 0 ; i < 2*n - 1 ; i++){
            
            for(int j = 0 ; j<2*n - 1 ; j++){
                int top = j;
                int bottom  = 2*n - 2 - j;
                int left = i;
                int right = 2*n - 2 - i;
                
                cout<< n - min(min(left,right),min(top,bottom))<<" ";
            }
            
            cout<<endl;
        }
        
        
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
        ob.printSquare(n);
    }
    return 0;
}
// } Driver Code Ends