// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    int subClock(int num1, int num2) {
        int diff;
        diff=num1-num2;
       
        diff%=12;
        if(diff<0)
        return diff+12;
        else
        return diff;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int num1,num2;
        
        cin>>num1>>num2;

        Solution ob;
        cout << ob.subClock(num1,num2) << endl;
    }
    return 0;
}  // } Driver Code Ends