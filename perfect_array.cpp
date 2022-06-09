// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        // stack<int> st;
        // for(int i=0;i<n;i++)
        // {
        //     st.push(a[i]);
        // }
        // for(int j=0;j<n;j++)
        // {
        //     if(a[j]==st.top())
        //     st.pop();
        //     else
        //     break;
        // }
        // bool x=st.empty();
        
        // if(st.empty())
        // return true;
        // else 
        // return false;
		/*******optimized approach*******/
        for(int i=0;i<n/2;i++)
        {
            if(a[i]!=a[n-1-i])
                return false;
        }
        return true;
    }
};




// { Driver Code Starts.
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        if(ob.IsPerfect(a,n))
            cout<<"PERFECT\n";
        else
            cout<<"NOT PERFECT\n";
        
    }
    
}  // } Driver Code Ends