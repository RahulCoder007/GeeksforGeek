// { Driver Code Starts
//Initial template for C++
//Find the Number Occurring Odd Number of Times
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int findSingle(int N, int arr[]){
        /*******O(NlogN)***********/
        // sort(arr,arr+N);
        // for(int i=0;i<N;i=i+2)
        // {
        //     if(arr[i]!=arr[i+1])
        //     return arr[i];
        // }
        /*********O(N)**********/
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum=sum^arr[i];
        }
        return sum;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, X;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        
        Solution ob;
        cout << ob.findSingle(N, arr) << endl;
    }
    return 0; 
}   // } Driver Code Ends