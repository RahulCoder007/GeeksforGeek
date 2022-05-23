
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
   // cout<<"n:"<<n<<endl;
    map<pair<string, string>, vector<int> > m; //prints in sorted order of key which is pair
    //set<pair<int,int>> st;
    for(int i=0;i<n;i++)
    {
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;j++)
        {
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
        for(auto &it : m)
        {
           auto &full_name=it.first;
            auto &list=it.second;
            cout<<full_name.first<<" "<<full_name.second<<endl;
            cout<<list.size()<<endl;
            for(auto &element : list)
            {
                cout<<element<<" ";
            }
             cout<<endl;
        }
   
}
