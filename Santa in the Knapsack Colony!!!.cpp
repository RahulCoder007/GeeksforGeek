/*
// Sample code to perform I/O:
10 2
23 5 1 23 8 1 1 23 86 75*/
#include <bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int h_no[N];
int main() {
	int n,k;
	cin>>n>>k;
	
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		h_no[x]++;
	}
	int ct=0;
	for(int i=0;i<N;i++)
	{
		if(h_no[i]>k)
		{
			ct++;
		}
	}
	cout<<ct;
}
