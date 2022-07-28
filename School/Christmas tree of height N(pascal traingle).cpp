#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
	long long int a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<=i;j++)
		{
            //int a[i];
            if(i==1 || j==0 || j==i){
                a[i][j]=1;
                cout<<a[i][j]<<" ";
            }
            else{
            a[i][j]=a[i-1][j-1]+a[i-1][j];
            cout<<a[i][j]<<" ";
            }
		}
			cout<<endl;
	}
	
  }
	
}