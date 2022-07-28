
// Sample code to perform I/O:

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x,y;
	set<pair<int,int> > s_pt;
	vector<pair<int,int> > points(n);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		// cin>>x>>y;
		// points.push_back({x,y});
		cin>>points[i].first>>points[i].second;
		s_pt.insert(points[i]);
	}
	int ar_min=INT_MAX, ar_max=INT_MIN;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			auto p1=points[i]; //point 1
			auto p2=points[j]; //point 2
			/*********diagonal exist or not***********/
			if(p1.first==p2.first)
			continue;
			if(p1.second==p2.second)
			continue;
			if(p1.first>p2.first)
			swap(p1,p2); //to get proper diagonal view
			int x1=p1.first, y1=p2.second;  //3rd point
			int x2=p2.first, y2=p1.first; //4th point
			/***3rd & 4th point exits or not(checking in set bcoz it will take o(logn) time and in vector need to sort then check)***********/
			if(s_pt.count({x1,y1}) && s_pt.count({x2,y2})) 
			{
				int ar=abs(p2.second-p1.second) * abs(p2.first-p1.first);
				ar_min=min(ar_min,ar);
				ar_max=max(ar_max,ar);
			}

		}
	}
	if(ar_min==INT_MAX)
	cout<<-1<<endl;
	else
	cout<<ar_max-ar_min<<endl;


}

