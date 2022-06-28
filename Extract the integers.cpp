// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<string> extractIntegerWords(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        vector<string> ans = extractIntegerWords(str);
        if(ans.size() == 0)
            cout<<"No Integers";
        else
            for(auto i: ans) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


vector<string> extractIntegerWords(string s)
{
     vector<string> v;
     
    int i=0;
    int len=s.size();
    while(i<len)
    {
       if(isdigit(s[i]))
       {
           string k="";
           /*******checks current(i) and next(i+1) value digit or not***********/
           while(isdigit(s[i]) && i<len)
           {
               k+=s[i];
               i++;
           }
           v.push_back(k);
           //k.clear();
       }
       i++;//since above loop already checked this(i+1) value is not digit so move to next(i+2) iteration
       cout<<s[i];
    }
    return v;
  
}