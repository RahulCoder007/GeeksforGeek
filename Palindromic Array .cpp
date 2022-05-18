// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
          int sum,k;
    	
    	for(int j=0;j<n;j++)
    	{
    	    sum=0;
    	    k=a[j];
    	    while(a[j]>0) //123 //12
    	    {
    	        int d=a[j]%10; //3 //2 //1
    	        sum=sum*10+d; //300+20+1
    	        a[j]=a[j]/10; //12 //1
    	       // x=x/10; //10
    	        
    	    }
    	    if(sum!=k)
    	    return 0;
    	}
    	return 1;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends