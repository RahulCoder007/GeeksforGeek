// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	public:
	vector<long long int> find(int l, int b, int h)
	{
	    vector<long long int> v(2);
	    long long ls=l;
	    long long bs=b;
	    long long hs=h;
	    v[0]=2*(ls*bs+bs*hs+hs*ls);
	    v[1]=ls*bs*hs;
	    return v;
	}  
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int l, b, h;
		cin >> l >> b >> h;
		Solution ob;
		vector<long long int> ans = ob.find(l, b, h);
		for(auto i: ans)cout << i <<" ";
		cout << "\n";
	}  
	return 0;
}  // } Driver Code Ends