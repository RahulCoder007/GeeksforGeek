// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            vector<int> v(4,0);
            for(int i=0;i<s.size();i++)
            {
                if(isupper(s[i]))
                v[0]++;
                if(islower(s[i]))
                v[1]++;
                if(isdigit(s[i]))
                v[2]++;
                if(ispunct(s[i]))
                v[3]++;
            }
            return v;
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
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal  // } Driver Code Ends