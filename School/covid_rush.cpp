/******own logic....7/10 test case passed****/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,day;
	cin >>n>>m;
	int count[m]={0};
	vector<pair<int,pair<int,int>>> p_detail(n);
	vector<int> vacant(m);
// 	for(auto it: vacant)
// 	cout<<it;
	map<int,vector<int>>discharge;						
	for(int i=0;i<n;i++)
	{
		p_detail[i].first=i;
		cin>>p_detail[i].second.first;
	}
	for(int i=0;i<n;i++)
	cin>>p_detail[i].second.second;
// 	for(int i=0;i<n;i++)
//  	cout<<"p_details: "<<p_detail[i].second.first<<" "<<p_detail[i].second.second<<endl;
    for(int i=0;i<m;i++)
        vacant[i]=1; //centre are vacants ****to use this type of syntax, always initialize vector with size(n)
        // for(int i=0;i<m;i++)
        // cout<<"this:"<<vacant[i];//exit(0);
    for(int i=0;i<n;i++)
    {
        cout<<"p_details: "<<p_detail[i].second.first<<" "<<p_detail[i].second.second<<endl;
        auto it=discharge.begin();
        int d=p_detail[i].first%m;  //centre no
        cout<<"d:"<<d<<endl;
        if(vacant[d])
        {
            cout<<" if:"<<endl;
            vacant[d]=0;
           count[d]++;
            cout<<"p_details: "<<p_detail[i].second.first<<" "<<p_detail[i].second.second<<endl;
             day=p_detail[i].second.first+p_detail[i].second.second;
            cout<<"day "<<day<<endl;
            discharge[day].push_back(d);
        }
        
       
        else if(vacant[d] || it->first<=p_detail[i].second.first)
        {
            cout<<"else if:"<<endl;
            
            for(auto itr : it->second)
            {
            vacant[itr]=1;  //those centre are vacants again
            
            }
             discharge.erase(it->first);
              cout<<"p_details: "<<p_detail[i].second.first<<" "<<p_detail[i].second.second<<endl;
             day=p_detail[i].second.first+p_detail[i].second.second;
            cout<<"day "<<day<<endl;
            discharge[day].push_back(d);
            vacant[d]=0;
             count[d]++;
        }else{
             cout<<"else: "<<endl;
            auto itr=lower_bound(vacant.begin()+d,vacant.end(),1);
            if(itr==vacant.end())
            itr=vacant.begin();
            //cout<<"pos:"<<itr-vacant.begin()<<endl; //for getting position of vector
            if(vacant[itr-vacant.begin()])
            {
                 vacant[itr-vacant.begin()]=0;
               count[itr-vacant.begin()]++;
                cout<<"p_details: "<<p_detail[i].second.first<<" "<<p_detail[i].second.second<<endl;
                 day=p_detail[i].second.first+p_detail[i].second.second;
                cout<<"day "<<day<<endl;
                discharge[day].push_back(itr-vacant.begin());
            }
        }
        
        }
         //cout<<"map first"<<it->first<<endl;
    for(int i=0;i<m;i++)
    cout<<count[i]<<" ";
    // for(auto itr: discharge)
    // {
    //     cout<<"first"<<itr.first<<endl;
    //     for(auto it: itr.second)
    //     cout<<"second"<<it<<" ";
    // }
    	
}
