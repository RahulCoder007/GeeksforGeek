// { Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string s)
    {
        string k="";
        for(int i=0;i<s.size();i++)
        {
           if(isalpha(s[i]))
           {
               if(!isupper(s[i]))
               k.push_back('z'-s[i]+'a');
               else
               k.push_back('Z'-s[i]+'A');
           }else
           {
               k.push_back(s[i]);
           }
        }
        return k;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}  // } Driver Code Ends