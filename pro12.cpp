//12:find the power(a,b) using recursion
#include<iostream>
using namespace std;
int main()
{
	int num,pow,ans;
	int powfunc(int,int,int);
	cout<<"Enter the number\n";
	cin>>num;
	cout<<"Enter the power\n";
	cin>>pow;
	ans=powfunc(num,num,pow);
	cout<<"Result: "<<ans<<endl;
	return 0;
}
int powfunc(int x,int n,int p)
{
	if(p==1) 	return n;
	else	return powfunc(x,x*n,p-1);		
}
