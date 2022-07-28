/*
// Sample code to perform I/O:
3 4
1 2
1 3
2 3
1 2 3 4*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ct=0;
	int m,n;
	cin>>m>>n;
	int arr[m+10],hash[n+10];
	for(int i=0;i<m;i++)
	{
		int keys,lock;
		cin>>keys>>lock;
		arr[i]=lock;
	}
	for(int i=0;i<n;i++){
		int x;
	cin>>x;
	hash[i]=x;
	}
	for(int i=0;i<n;i++)
	{
		auto it=find(arr,arr+m,hash[i]);
		if(it!=arr+m)
		ct++;		
	}
	if(ct==n)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}