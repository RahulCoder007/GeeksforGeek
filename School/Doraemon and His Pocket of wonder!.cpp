
// Sample code to perform I/O:

#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;	
	while(t--){
	    int n,m,x,y;
	    multiset<int> gadget;
	    cin>>n;
			for(int i=0;i<n;i++)
			{
				cin>>x;
				gadget.insert(x);
			}
			cin>>m;
			for(int j=0;j<m;j++)
			{
				cin>>y;
				//int ct=count(gadget.begin(),gadget.end(),y);
				int ct=gadget.count(y);
				//cout<<ct;
				while(ct--)
				{
					cout<<y<<" ";
				}
				gadget.erase(y);
			}
			for(auto value : gadget)
			cout<<value<<" ";
		    cout<<endl;
	}
	

}

