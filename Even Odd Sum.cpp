// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> EvenOddSum(int N, int Arr[]) {
        vector<int> v(2);
        for(int i=0;i<N;i++)
        {
            if(i%2==0)
            v[0]+=Arr[i];
            else
            v[1]+=Arr[i];
        }
        return v;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        Solution ob;
        vector<int> ans = ob.EvenOddSum(N, Arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}  // } Driver Code Ends