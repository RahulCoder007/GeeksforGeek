// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
	public:
		string is_AutomorphicNumber(int n)
		{
		    int num=n*n;
		    int k=n;
		    int ct=0;
		    while(n>0)
		    {
		        ct++;
		        n/=10;
		    }
		 
		  int size=pow(10,ct);
		  
		        int d=num%size;
		        //cout<<size<<" "<<n<<" "<<d<<" "<<num<<endl;
		        if(k==d)
		        return "Automorphic";
		        else
		        return "Not Automorphic";
		        
		    
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_AutomorphicNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}  // } Driver Code Ends