// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    char reVal(int n){
        if(n>=0 && n<=9)
        return char(n+'0');//char-48=int value
        else
        return char(n-10+'A');//since 2<=B<=16 so n must be within 16
    }
    string getNumber(int B, int N)
    {
        string s="";
       // int q;
    //   while(N>=B)
    //   {
    //       if(B>9){
    //           int r=N%B;
    //           if(r==10)
    //           s.push_back('A');
    //           else if(r==11)
    //           s.push_back('B');
    //           else if(r==12)
    //           s.push_back('C');
    //             else if(r==13)
    //           s.push_back('D');
    //           else if(r==14)
    //           s.push_back('E');
    //           else if(r==15)
    //           s.push_back('F');
    //           else
    //           s+=to_string(r);
    //       }
    //       else{
    //       int r=N%B;
    //       s+= to_string(r);//010
    //       }
    //       q=N/B;
    //       N/=B;
    //   }
    //   if(B>9){
    //          if(q==10)
    //           s.push_back('A');
    //           else if(q==11)
    //           s.push_back('B');
    //           else if(q==12)
    //           s.push_back('C');
    //             else if(q==13)
    //           s.push_back('D');
    //           else if(q==14)
    //           s.push_back('E');
    //           else if(q==15)
    //           s.push_back('F');
    //             else
    //           s+=to_string(q);
    //   }else
    //   s+=to_string(q);
    /********optimised way**********/
    while(N>0)
    {
        int r=N%B;
        s.push_back(reVal(r));
        N/=B;
    }
      reverse(s.begin(),s.end());
      return s;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int B,N;
        cin>>B>>N;
        Solution ob;
        string ans  = ob.getNumber(B,N);
        cout<<ans<<endl;
    }
    return 0;
}  // } Driver Code Ends