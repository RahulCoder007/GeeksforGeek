
/*2
5
2 2 2 2 2
4
2 2 2 2*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long int mult=1;
		//int a[n];
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			mult*=x;
		}
		int d=mult%10;
	//	cout<<d<<endl;
		if(d==2 || d==3 || d==5)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;

	}
}