// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        vector<int> v;
        int count=0;
    for(int i=0;i<n;i++)
    {
        //cout<<"element at "<<i<<" position is:"<<a[i]<<endl;
        if(a[i]==key){
        //cout<<"element is:"<<a[i]<<endl;
        v.push_back(i);
        break;
        }
        
    }
    for(int j=n-1;j>=0;j--)
    {
        if(a[j]==key){
        //cout<<" else element is:"<<a[j]<<endl;
            v.push_back(j);
            break;
        }
    }
    if(v.size())
    return v;
    else
    {
        v.push_back(-1);
        v.push_back(-1);
        return v;
    }
	//alternate way(less time complexity)
//   for(int i=0;i<n;i++)
//   {
//          if(a[i]!=key)
//          count++;
         
//     }
   
   
//     if(count==n)
//     {
//         v.push_back(-1);
//         v.push_back(-1);
//     }
//     return v;
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
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}
  // } Driver Code Ends