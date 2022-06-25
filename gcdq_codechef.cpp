#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
  int n,q;
 cin>>n>>q;
 int arr[n+10];
 int frwd[n+10];
 int back[n+10];
 frwd[0]=back[n+1]=0;
 for(int i=1;i<=n;i++)
 {
  cin>>arr[i];
 }
 for(int i=1;i<=n;i++)
 {
  frwd[i]=__gcd(frwd[i-1],arr[i]);
 }
 for(int i=n;i>=1;i--)
 {
  back[i]=__gcd(back[i+1],arr[i]);
 }
 while(q--)
 {
   int l,r;
  cin>>l>>r;
  
  cout<<__gcd(frwd[l-1],back[r+1])<<endl;
 }
 
}
}
