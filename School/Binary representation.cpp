// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    string getBinaryRep(int N)
    {
        string s="";
        //s.push_back('0');
        //cout<<s<<endl;
        for(int i=1<<29;i>0;i=i/2)
        {
            //cout<<"loop";
            if((N & i )!= 0)//{cout<<"yes";
            s.push_back('1');//cout<<s<<endl;}
            else//{cout<<"no";
            s.push_back('0');//cout<<s<<endl;}
        }
        
        //s.push_back((N>>i)&1);
        return s;
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
        cin >> N;
       
        Solution ob;
        string ans = ob.getBinaryRep(N);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends