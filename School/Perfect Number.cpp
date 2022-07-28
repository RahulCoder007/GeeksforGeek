// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPerfect(int n) {
         int sum=0;
         int k=n;
        while(n>0)
        {
            int d=n%10;
            int fact=1;
            for(int i=2;i<=d;i++)
            fact*=i;
            sum+=fact;
            n/=10;
        }
        if(sum==k)
        return 1;
        else
        return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPerfect(N) << "\n";
    }
}
  // } Driver Code Ends