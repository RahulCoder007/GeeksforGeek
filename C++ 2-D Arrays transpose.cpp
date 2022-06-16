// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define M 101

vector<vector<int>> transpose(int a[][M], int n);

int main()
{
    int t;
    cin>>t;
    int a[M][M];
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        vector<vector<int>> b;
        b = transpose(a, n);
        for(int i=0;i < n;i++)
        {
            for(int j=0;j<n;j++){
                cout << b[i][j] << " ";
            }
        }
        cout<<endl;
    }
}


// } Driver Code Ends


vector<vector<int>> transpose(int a[][M], int n)
{
    vector<vector<int>> v(n,vector<int>(n)); //to use v as array v[i]j[j] need to define it first
    for(int i=0;i<n;i++)
    {
        //vector<int> x;
        //for(int j=i;j<n;j++) //to prevent from swapping twice
        for(int j=0;j<n;j++)
        {
            v[i][j]=a[j][i];
        //   swap(a[i][j],a[j][i]);
        //     x.push_back(a[i][j]);
        }
        //v.push_back(x);
    }
    
    return v;
}
