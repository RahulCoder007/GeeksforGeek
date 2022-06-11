// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        string modify (string s)
        {
            vector<char> v;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                v.push_back(s[i]);
            }
             auto it=v.begin();
            for(int i=s.size()-1;i>=0;i--)
            {
               
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                {
                    s[i]=*it;
                    ++it;
                }
            }
            return s;
        }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends