// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void printFloydTriangle(int n)
    {
        int k=1;
       for(int i=0;i<n;i++)
       {
          
           for(int j=0;j<=i;j++)
           {
               cout<<(k++)<<" ";
           }
           cout<<endl;
       }
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        ob.printFloydTriangle(N);
    }
    return 0;
}  // } Driver Code Ends