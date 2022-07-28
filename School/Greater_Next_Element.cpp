/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
vector<int> NGE(vector<int> v)
{
    vector<int> nge(v.size());
    stack<int> st;
    for(int i=0;i<v.size();i++)
    {
        while((!st.empty()) && v[i]>v[st.top()]) //taking indices in stack instead of values directly for easy calculation
        {
            nge[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
    nge[st.top()]=-1; //working on indices here so nge array have indices with value stack top
    st.pop();
    }
    
     return nge;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    vector<int> nge=NGE(v);
    for(int j=0;j<n;j++)
    cout<<v[j]<<" "<<(nge[j]==-1?-1:v[nge[j]])<<endl;
}