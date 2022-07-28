/******************************************************************************

doing Permutations of string will it give pallindrome or not? for particular substring from l to r in string.
1<=l,r<=1000

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
//#include "optimized_approach.cpp"

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,q;
       cin>>n>>q;
       string s;
       cin>>s;
       while(q--){
       int l,r;
       cin>>l>>r;
       
       int odd_ct=0;
       int hash[26];
       for(int i=0;i<26;i++)
       {
           hash[i]=0;
       }
       l--;r--;//indexing of array starts from zero and in question l,r starts from one.
       //exit(0);
       //cout<<s;
       for(int i=l;i<=r;i++)  //O(n) in wc
       {
           //storing occurance of alphabets
           hash[s[i]-'a']++;
       }
       for(int i=0;i<26;i++)
       {
           if(hash[i]%2!=0)
           odd_ct++;
       }
       if(odd_ct>1)
       cout<<"not a pallindrome\n";
       else
       cout<<"yes a pallindrome\n";
       }
   }
}
//T(n)=O(t*q*n) >10^7 iterations i.e taking more than 1 sec