#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int cth_num,step_size;
	//set<long long int> s;
	for(int i=2;c>0;i++)
	{
		if(i%a==0 || i%b==0)
		{
			c--;
			cth_num=i;
		}
	}
	if(cth_num % a==0 && cth_num % b ==0)
	{
		step_size=lcm(a,b);
	}
	/*****lcm******/
	/*for(int i=0;i<=a*b;i++)
	{
		if(i%a==0 && i%b==0)
		{
			lcm=i;
			break;
		}
	}*/
	else if(cth_num % a ==0)
	{
		step_size=a;
	}else
	{
		step_size=b;
	}
	for(int j=cth_num;j>=0;j=j-step_size)
	{
		cout<<j<<" ";
	}
}
/*Given 3 positive numbers A, B and C. We make a set which contains numbers that are either multiples of A or B or (A and B) in increasing order.
 We take the C-th number of set and print from C-th number to 0 with a step value of A or B whichever it is multiple of and if its a multiple of both, 
 then use step value as LCM(A, B)*/