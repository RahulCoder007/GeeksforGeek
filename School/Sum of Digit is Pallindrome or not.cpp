// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        int k;
        int sum=0,sum1=0;
        while(N>0)
        {
            int d=N%10;
            sum+=d;
            N/=10;
        }
        k=sum;
        while(sum>0)
        {
            int m=sum%10;
            sum1=sum1*10+m;
            sum=sum/10;
        }
        if(k==sum1)
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
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends