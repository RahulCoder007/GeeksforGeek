// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    vector<string> splitString(string s) 
    { 
       //vector<string> v;
       vector<string> v(3);
       //string s1=""; string s2=""; string s3="";
       for(int i=0;i<s.size();++i)
       {
           
           if(isalpha(s[i]))
           //s1+=s[i];
           v[0].push_back(s[i]);  //for using v[0] and appending(push_back) to v[0] need to declare vector with size
           else if(isdigit(s[i]))
           v[1].push_back(s[i]);
           //s2+=s[i];
           else
           v[2].push_back(s[i]);
           //s3+=s[i];
           
           
       }
    //   v.push_back(s1);
    //   v.push_back(s2);
    //   v.push_back(s3);
  //         for(int i=0;i<s.size();++i)
       //{
    //       if(isdigit(s[i]))
    /********used to store character into string vector********/
    //       v.push_back(string(1,s[i]));
    //   }
       
  
       return v;
    } 
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        vector<string> result = ob.splitString(S);
        for (int i = 0; i < result.size(); ++i)
        {
            if(result[i] == "")
                cout<<-1<<"\n";
            else
                cout<<result[i]<<"\n";
        }
    }
    return 0; 
} 

  // } Driver Code Ends