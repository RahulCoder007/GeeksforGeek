#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	getline(cin,s);
	transform(s.begin(),s.end(),s.begin(),::toupper);
	stringstream x(s);
	while(getline(x,t,' ')){
		cout<<t<<endl;
	}
}