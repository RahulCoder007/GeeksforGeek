#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int sum1=0, sum2=0;
	for(int i=0;i<s.size();i++)
	{
		if(isupper(s[i]))
		{
			char low=	tolower(s[i]);
			sum1+=int(low);
		}else{
			char up=toupper(s[i]);
			sum2+=int(up);
		}
		
	}
	int res=abs(sum1-sum2);
	int ct=0;
	for(int i=2;i<=sqrt(res);i++)
	{
		if(res%i==0){
		ct++;
		break;
		}
	}
		if(ct)
		cout<<0;
		else
		cout<<1;
}