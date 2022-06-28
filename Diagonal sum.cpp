// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        int lsum=0, rsum=0;
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            lsum+=matrix[i][i];
            rsum+=matrix[i][n-i-1];
        }
        return (lsum+rsum);
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.DiagonalSum(matrix);
		cout << ans <<'\n';
	}
	return 0;
}  // } Driver Code Ends