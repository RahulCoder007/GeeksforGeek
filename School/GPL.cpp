/*
3
4
0001
2
10
4
1010*
binary to decimal*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		long long int sum=0;
		for(int i=0;i<s.size();i++)
		{
			long long int x=s[i]-48; //to convert char to int
			if(x & 1 !=0)//bit set or not set
			{
				
				sum+=(x<<((s.size()-1)-i));
				
			}
		//	cout<<sum;
		}
		cout<<sum<<endl;
	}
}