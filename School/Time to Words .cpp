// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string timeToWord(int H, int M){
        char num[][64]={"zero", "one", "two", "three", "four", 
                        "five", "six", "seven", "eight", "nine", 
                        "ten", "eleven", "twelve", "thirteen", 
                        "fourteen", "fifteen", "sixteen", "seventeen", 
                        "eighteen", "nineteen", "twenty", "twenty one", 
                        "twenty two", "twenty three", "twenty four", 
                        "twenty five", "twenty six", "twenty seven", 
                        "twenty eight", "twenty nine"}; 
       
        if(M==0){
            string s=num[H];
            return s+=" o' clock";
        }
        else if(M==1){
            string s=num[H];
            return "one minute past " +s;
        }
        else if(M==59){
            string s=num[H % 12 + 1];
            return "one minute to " +s;
        }
        else if(M==10){
            string s=num[H];
            return "ten minutes past " +s;
        }
        
        else if(M==15){
            string s=num[H];
            return "quarter past " +s;
        }
        
        else if(M==30){
            string s=num[H];
             return "half past " +s;
        }
       
        else if(M==45){
            string s=num[H % 12 + 1];
            return "quarter to " +s;
        }
        else if(M<30){
            string s=num[H];
            string s1=num[M];
            return s1+" minutes past "+s;
        }
        else if(M>30){
            string s=num[(H % 12) + 1];
            string s1=num[60-M];
            return s1+" minutes to " +s;
        }
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  H, M;
        cin >> H >> M;
        Solution ob;
        cout<<ob.timeToWord(H,M)<<endl;
    }
    return 0;
}
  // } Driver Code Ends