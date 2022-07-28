// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	long long diagonals(int n)
	{
		long long N=n;
		return (N*(N-3)/2);

	}
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

	   

	    Solution ob;
	    cout << ob.diagonals(n) << "\n";
   
    }
    return 0;
}
  // } Driver Code Ends