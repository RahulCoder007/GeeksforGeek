#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,f,d,a;
		int count=0;
		vector<pair<int,int>>ship;
		cin>>n>>k>>f;
		for(int i=0;i<n;i++)
		{
			cin>>d>>a;
			ship.push_back({k-d,a});
		}
		multiset<int> food_avail;
		sort(ship.begin(),ship.end());
		bool can_reach=true;
		int cur_id=0;
		for(int j=1;j<k;j++)
		{
			f--;
			if(ship[cur_id].first==j)
			{
				food_avail.insert(ship[cur_id].second);
				cur_id++;
			}
			if(f==0)
			{
				if(food_avail.size()==0)
				{
					can_reach=false;
					break;
				}
				else{
					auto it=--food_avail.end();
					f=f+(*it);
					food_avail.erase(it);
					count++;
				}
			}

		}


		if(can_reach)
		cout<<count<<endl;
		else
		cout<<-1<<endl;
	}

}