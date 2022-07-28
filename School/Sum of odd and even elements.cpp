// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
	public:
		vector<int> find_sum(int N)
		{
		    int n1,n2;
		    if(N%2!=0){
		    n1=N/2;
		    n2=n1+1;
		    }else{
		        n1=n2=N/2;
		    }
		    vector<int> v(2);
		    int even_sum=n1*(n1+1);
		    int odd_sum=n2*n2;
            // v.push_back(odd_sum);
            // v.push_back(even_sum);
            //v[0].push_back(even_sum); //error bcoz we're not appending to it like in vector of strings/character instead we're assigning an int value
            v[0]=odd_sum;
            v[1]=even_sum;
            return v;
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
    	vector<int> ans = ob.find_sum(n);
    	for(auto i: ans)
    		cout << i << " ";
    	cout<<"\n";
    }
	return 0;
}  // } Driver Code Ends