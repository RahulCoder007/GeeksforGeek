// { Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
	int fullPrime(int n){
	    int ct=0;
	    for(int i=2;i*i<=n;i++)
	    {
	        if(n%i==0)
	       return 0;
	        
	    }
	    //cout<<ct<<endl;
	   
            while(n>0) //37
            {
                int d=n%10;
                if(d!=2 && d!=3 && d!=5 && d!=7)
                return 0;
                n/=10;
                
            }
        
       
        return 1;
       
	}
};


// { Driver Code Starts.
int main()
{
	int t;
    cin>>t;
    while(t--){
	   int N;
	   cin>>N;
       Solution ob;
       cout << ob.fullPrime(N)<<"\n";
    }
}  // } Driver Code Ends