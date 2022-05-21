#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--)
   {
       int n,k;
       cin>>n>>k;
       multiset<long long> bags; //(bag>10^9) goes beyond int
       for(int i=0;i<n;i++)
       {
           long long candy_ct;
           cin>>candy_ct;
           bags.insert(candy_ct);
       }
       //cout<<"n:"<<n<<endl;
      // cout<<"k:"<<k<<endl;
       //for(auto x : bags)
       //cout<<x<<" ";
      long long total_candies=0;
      //cout<<total_candies;
       for(int j=0;j<k;j++)
       {
           auto it=(--bags.end()); //sets are in sorted order with biggest element in the last
           long long extracted_candy_ct=*it; //candy_ct of specific bag i.e last (max) bag
          // cout<<extracted_candy_ct<<endl;
           total_candies+=extracted_candy_ct; //7
          // cout<<total_candies<<endl;
           bags.erase(it);
           bags.insert(extracted_candy_ct/2);

       }
       cout<<total_candies<<endl;
   }
}
