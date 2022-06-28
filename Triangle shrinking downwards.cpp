// { Driver Code Starts
#include <bits/stdc++.h>
#include<string>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string triDownwards(string s) {
        //application of LTM (i>j) then append dot
        int n=s.size();
        string k=""; int x;
        for(int i=0;i<n;i++)
        {
             //x=i;
             for(int j=0;j<n;j++)
            {
            // for(int j=i;j<n;j++)
            // {
                // while(x>0){
                // k+='.';
                // x--;
                // }
                //k+=s[j];
                if(i>j)
                k+='.';
                else
                k+=s[j];
            }
            
        }
        //cout<<k<<endl;
        return k;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        
        cin >> S;

        Solution ob;
        string ans=ob.triDownwards(S);
        
        for(int i=0 ; i<ans.length() ; i++)
        {
            cout<<ans[i];
            if((i+1)%S.length()==0)
                cout<<endl;
        }
        
    }
    return 0;
}  // } Driver Code Ends