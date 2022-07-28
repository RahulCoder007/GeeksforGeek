// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
	public:
	int find(vector<int>A, vector<int>B){
	    int perp=A[0]*B[0]+A[1]*B[1]+A[2]*B[2];
	    int par=(A[1]*B[2]-A[2]*B[1])-(A[0]*B[2]-B[0]*A[2])+(A[0]*B[1]-A[1]*B[0]);
	    if(abs(par*par)==0)
	    return 1;
	    else if(perp==0)
	    return 2;
	    else
	    return 0;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>A(3), B(3);
		for(int i = 0; i < 3; i++)cin >> A[i];
		for(int i = 0; i < 3; i++)cin >> B[i];
		Solution ob;
		int ans = ob.find(A, B);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends