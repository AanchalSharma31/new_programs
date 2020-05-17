//8:to find GCD of two given integers using recursion
#include<iostream>
using namespace std;
int main()
{ 
	int num1,num2,gcd;
	int gcdfunc(int,int,int);
	cout<<"Enter the number\n";
	cin>>num1>>num2;
	if(num1>num2) gcd=gcdfunc(num1,num2,num2);
	else gcd=gcdfunc(num1,num2,num1);
	cout<<"GCD: "<<gcd<<endl;
	return 0;
}
gcdfunc(int x,int y,int m)	
{
	if((x%m==0)&& (y%m==0)) return m;
	else return gcdfunc(x,y,m-1);
}
