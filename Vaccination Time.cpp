/*
3 3
1 1 1
1 2 1
1 1 1
4
1 1 3 3
1 2 1 2
2 2 3 3
2 2 2 2*/
#include <bits/stdc++.h>
using namespace std;
const int M=1e3+10;
const int N=1e3+10;
int arr[M][N];
//int pf[M][N];
int main() {
	int m,n;
	cin>>m>>n;

	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
		    int x;
		    cin>>x;
			//cin>>arr[i][j];
			if(x%2!=0)
			{
			    arr[i][j]=1;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	/*************calculating(storing) prefix sum at each cell*************/
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			arr[i][j]=arr[i][j]+arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
		}
		
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	int q;
	cin>>q;
	while(q--)
	{
	   
	    int ct;
		int l1,r1,l2,r2;
		cin>>l1>>r1>>l2>>r2;
		//l1--;r1--;l2--;r2--;
	/***********retrieving sum for a range************/
	    ct=arr[l2][r2]-arr[l1-1][r2]-arr[l2][r1-1]+arr[l1-1][r1-1];
		cout<<ct<<endl;
		
	}
}
