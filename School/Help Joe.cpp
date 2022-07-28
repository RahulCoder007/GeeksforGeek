/*
// Sample code to perform I/O:
abccddeecab
2
2
a b 
2
a c*/
#include <bits/stdc++.h>
using namespace std;
int hsh[27];
int main() {
	string s;
	cin>>s;
	/*******count character of given string**********/
	for(int i=0;i<s.size();i++)
	{
		hsh[s[i]-'a']++;
	}
	int q;
	cin>>q;
	
	while(q--){
		int n;
		cin>>n;
		/*******store unique character of query string*********/
		vector<int>unique_ch(27,0);
		for(int i=0;i<n;i++)
		{
			char ch;
			cin>>ch;
			unique_ch[ch-'a']=1;
		}
		bool odd_present=false;
		int pallin_size=0;
		/********check for each query string's character the odd count of given string's charcter for pallindrome check********/
		for(int i=0;i<26;i++)
		{
			if(unique_ch[i]==0)
			continue;
			int c_ct=hsh[i]; //character count value is integer
			if(c_ct%2==0){
				pallin_size+=c_ct;
			}else{
				pallin_size+=c_ct-1;
				odd_present=true;
			}
		}
		if(odd_present)
		pallin_size++;
		cout<<pallin_size<<endl;
	}
}

