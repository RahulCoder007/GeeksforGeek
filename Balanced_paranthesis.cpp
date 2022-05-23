/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
string isBalanced(string s)
{
    unordered_map<char,int> symbols={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
    stack<char> st;
    for(char bracket : s)
    {
        if(symbols[bracket]<0)
        {
            st.push(bracket);
        }else{
        if(st.empty())
        return "NO";
        char top=st.top();
        st.pop();
       if(symbols[top] + symbols[bracket] !=0)
            return "NO";
        }
        
    }
    if(st.empty())
         return "YES";
    return "NO";
}


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       cout<< isBalanced(s)<<endl;
   }
}
