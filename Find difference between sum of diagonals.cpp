// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        int d1=0, d2=0,diff=0;
        
        for(int i=0;i<N;i++)
        {
            
            d1+=Grid[i][N-i-1];
           
            d2+=Grid[i][i];
        }
        //cout<<d1<<" "<<d2<<endl;
        diff=abs(d1-d2);
        return diff;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> Grid1(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> Grid1[i][j];
        Solution ob;
        cout << ob.diagonalSumDifference(N, Grid1) << "\n";
    }
}  // } Driver Code Ends