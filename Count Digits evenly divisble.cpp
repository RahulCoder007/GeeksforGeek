// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int n){
       int ct=0;
       int k=n;
      while(n>0)
      {
          int d=n%10;
          if(d!=0 && k%d==0)
          ct++;
          n/=10;
      }
      return ct;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends