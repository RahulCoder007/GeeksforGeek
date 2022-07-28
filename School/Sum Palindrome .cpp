// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long isSumPalindrome(long long n){
         long long k;
         long long res;
        for(int i=0;i<6;i++){
        if(i==0)
        k=n;
        else
        k=n=res;
        long long sum=0;
        while(n>0)
        {
            long long d=n%10;
             sum=sum*10+d;
            n/=10;
        }
        if(k==sum)
        return k;
        else
        res=sum+k; 
    }
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        cout<<ob.isSumPalindrome(n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends