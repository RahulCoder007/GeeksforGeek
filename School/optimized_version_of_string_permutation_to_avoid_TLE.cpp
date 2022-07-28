/******************************************************************************
optimized version to avoid TLE 
doing Permutations of string will it give pallindrome or not? for particular substring from l to r in string.
1<=l,r<=1000

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10; //since its given string size can be 10^1e5
int hsh[N][26];//to store hashing of each alphabet
int main(){
     int t;
   cin>>t;
   while(t--)
   {
       /*******initialising with zero for each test case since its a global array hence prev values are stored *****/
       for(int i=0;i<N;i++){
           for(int j=0;j<26;j++){
               hsh[i][j]=0;
           }
       }
       int n,q;
       cin>>n>>q;
       string s;
       cin>>s;
       for(int i=0;i<n;i++)
       {
        hsh[i+1][s[i]-'a']++;//counting alphabet occurances for each array of alphabet &  (i+1)=>making hash array 1-based indexing  
       }
       /******computing prefix sum for each array of alphabet*******/
       for(int i=0;i<26;i++)
       {
           for(int j=1;j<=n;j++) //due to above 1-based hashing its now possible here to run loop like this
           {
               hsh[j][i]+=hsh[j-1][i];
           }
       }
       while(q--){
        int l,r;
        cin>>l>>r;
        int odd_ct=0;
        for(int i=0;i<26;i++)
        {
            int char_ct=hsh[r][i]-hsh[l-1][i];//using prefix sum array of hash it'll give character count for l to r
            if(char_ct%2!=0)
            odd_ct++;
        }
         if(odd_ct>1)
       cout<<"not a pallindrome\n";
       else
       cout<<"yes a pallindrome\n";
       }
   }
}
//T(n)=O(t*q) < 10^7 iterations i.e taking less than 1 sec
