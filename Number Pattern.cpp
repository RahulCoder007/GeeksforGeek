// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<string> numberPattern(int n)
    {
        vector<string> v;
       for(int i=1;i<=n;i++)
       {
           string k="";
           for(int j=1;j<=i;j++)
           {
                k+=to_string(j);
               
           }
           for(int j=i-1;j>=1;j--)
           k+=to_string(j);
            v.push_back(k);//it'll simultaneously add string on diff pos of vectors
       }
     
       return v;
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
        cin>>N;
       
        Solution ob;
        vector<string> res = ob.numberPattern(N);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    
    }
    return 0;
}  // } Driver Code Ends