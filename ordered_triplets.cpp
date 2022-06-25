
#include <bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int A_Limit=1e3+10;
const int N=1e5+10;
int arr[N];
int hsh[A_Limit];
int main() {

	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		hsh[arr[i]]++;
	}
	long long int  ct_trip=0;
	/*********i-value************/
	for(int i=1;i<A_Limit;i++)
	{
		if(hsh[i]==0)
		continue;
		long long int ct_i=hsh[i];
		hsh[i]--;
		/************j-value for each ith value(2,4,5)***********/
		for(int j=1;j<A_Limit;j++)
		{
			if(hsh[j]==0)
			continue;
			long long int ct_j=hsh[j];
			hsh[j]--;
			int diff=abs(i-j);
			int ct_k1=j-diff; //it'll be checked to have values>0
			int ct_k2=j+diff; //it'll be checked to have values>A_Limit
			/*******if possible k values are same and its in the array i.e hash table***********/
			if(ct_k1==ct_k2 && ct_k1>0 && ct_k1<A_Limit){
				ct_trip+=(ct_i*ct_j*hsh[ct_k1])%M;
			}else{
				if(ct_k1>0)
				ct_trip+=(ct_i*ct_j*hsh[ct_k1])%M;
				if(ct_k2<A_Limit)
				ct_trip+=(ct_i*ct_j*hsh[ct_k2])%M;
			}
			ct_trip%=M;
			hsh[j]++;
		}
		hsh[i]++;
			
	}
	cout<<ct_trip<<endl;
}
