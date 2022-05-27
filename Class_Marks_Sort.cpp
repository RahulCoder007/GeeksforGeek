#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,string> a, pair<int,string> b)
{
    if(a.first!=b.first)
    {
    return a.first > b.first; //marks 5>4>3...
    }
    return a.second < b.second;
   
}
int main() {
	int n;
	cin >> n; 
	vector<pair<int,string>>v;
    while(n--)
	{
	    
	    string name;
	    int marks;
	    cin>>name>>marks;
		v.push_back({marks,name}); //99 Bob
	}
	/*********decreasing order**********/
	//sort(v.begin(),v.end(),greater<pair<int,string>>());
	//sort(v.rbegin(),v.rend()); 
	sort(v.begin(),v.end(),cmp);
	for(auto &it : v)
	{
		cout<<it.second<<" "<<it.first<<endl;
	}
}