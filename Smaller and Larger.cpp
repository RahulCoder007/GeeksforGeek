// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	   vector<int> v(2);
	    int *ptr=lower_bound(arr,arr+n,x);
	    int *ptr1=upper_bound(arr,arr+n,x);
	     /*******checking all elements same in array**********/
	   if(*ptr==arr[0] && *(ptr1-1)==arr[n-1])
	   {
	       v[0]=n;
	        v[1]=n;
	        return v;
	   }
	   int ub=(ptr1-arr);
	   int lb=(ptr-arr);
	   if(ub-lb==1) //x found
	   {
	       v[0]=lb+1;
    	   v[1]=n-lb;
    	    return v;
	   }else if(ub-lb==0) //x not found
	   {
	       v[0]=lb;
	        v[1]=n-lb;
	        return v;
	   }
	   else{ /********1 5 5 5 5***********/
	       v[0]=(ub-1)+1;
	       v[1]=n-lb;
	       return v;
	       
	   }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMoreAndLess(arr, n, x);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
  // } Driver Code Ends