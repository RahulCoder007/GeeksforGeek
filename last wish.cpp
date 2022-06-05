
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,pair<int,int>>d1, pair<int,pair<int,int>>d2)
{
	int s1=d1.second.first+d1.second.second;
	int s2=d2.second.first+d2.second.second;
	if(s1!=s2)
	return s1<s2;
	else
	return d1.second.first<d2.second.first;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin >> n;	
	vector<pair<int, pair<int,int>>> d(n);
	for(int i=0;i<n;i++){
		d[i].first=i;
		cin>>d[i].second.first>>d[i].second.second; // in order to take i/p like this ...need to take vector of size n i.e size req at init
	//	cout<<d[i].second.first<<" "<<d[i].second.second<<endl;
	}

	sort(d.begin(),d.end(),cmp);
// 		for(auto &it : d)
// 	cout<<it.second.first<<" "<<it.second.second<<endl;
	int ans[n];
	for(int i=0;i<n;i++)
	{
	  
		ans[d[i].first]=i;
		
	}
	 for(int i=0;i<n;i++)
	 cout<<ans[i]<< " ";
	cout<<endl;
					
}
//cout<<endl; loop didn't come here after 1st test case so break line req in inner line only
}
