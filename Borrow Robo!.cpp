/*
// Sample code to perform I/O:
6
1 3 3 6 4 6
4
1 4
4 3
4 6
1 2*/
#include <bits/stdc++.h>
using namespace std;
const int N=2e5+10; //range of hash array will go to this no
int robots[N];
int hsh[N];
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>robots[i];
		hsh[robots[i]]++;//count of money
	}
	int q;
	cin>>q;
	while(q--){
		int robot,price;
		cin>>robot>>price;
		if(robots[robot]==price)
		cout<<0<<endl;
		else{
			hsh[robots[robot]]--; // so that its own amt is not included in checking rem_amt
			if(robots[robot]<price)
			{
				int rem_amt=price-robots[robot];
				cout<<((hsh[rem_amt]==0 && hsh[price]==0) ? -1 : (hsh[rem_amt]+ hsh[price]))<<endl;
			}else
			cout<<((hsh[price]==0) ? -1 : hsh[price])<<endl;
			hsh[robots[robot]]++;
		}
		
	}
}

