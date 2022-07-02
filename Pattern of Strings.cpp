// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<string> pattern(string s)
	{
	    int n=s.size();
	    vector<string> v(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        
	        for(int j=0;j<n-i;j++)
	        {
	           
	            v[i].push_back(s[j]); //character by character is getting stored in vector at ith position
	        }
	     	//v.push_back(s1); //string getting stored at once at 0th position of vector  
	     	//v.push_back(s2); //string getting stored at once at 1th position of vector 
	    }
	   // for(int i = S.size(); i >= 1; i--)
	   // 	v.push_back(S.substr(0, i));
	    return v;
	}

};

// { Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   		Solution ob;

   		vector<string> ans = ob.pattern(s);

   		for(int i = 0; i < ans.size(); i++)
   			cout << ans[i] << "\n";
   		
   	}

    return 0;
}  // } Driver Code Ends