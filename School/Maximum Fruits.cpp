/*
// Sample code to perform I/O:
6
3 2 5 6 1 4
2
10 2 4
9 1 5*/

//hash array=> for(i=0;i<n;i++)hash[x]++; (for counting)
//prefix array=>for(i=1;i<=n+1;i++) pf[i]=pf[i-1]+pf[i]; (for prefix sum)
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int plt[N];
int pf[N];
int main() {
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int frt;
		cin>>frt;
		plt[i]=frt;
	}
	int q;
	cin>>q;
	while(q--)
	{
		int x,l,r;
		cin>>x>>l>>r;
		pf[l]=pf[l]+x;
		pf[r+1]=pf[r+1]-x;
		
		// for(int i=l;i<=r;i++)
		// {
		// 	plt[i]+=x;
		// }
	}
	for(int i=0;i<=n+10;i++)
	{
		pf[i]=pf[i-1]+pf[i];
		plt[i]+=pf[i];
	}
	int max=*max_element(plt,plt+n);
	cout<<max;
}

