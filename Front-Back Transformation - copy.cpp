// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string convert(string a);
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            string s;
            cin>>s;
            string ans=convert(s);
            cout<<ans<<endl;
            
        }
}
// } Driver Code Ends


string convert(string s)
{
    string k; //Hello
    //reverse(s.begin(),s.end()); //olleH
    for(int i=0;i<s.length();i++)
    {
        if(!isupper(s[i]))
        k.push_back(char('z'-s[i]+'a'));
        else
        k.push_back(char('Z'-s[i]+'A'));
    }
    return k;
    
}