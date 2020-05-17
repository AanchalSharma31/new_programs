//14:to find gcd of two numbers
#include<iostream>
using namespace std;
int main()
{
	int num1,num2,gcd;
	cout<<"Enter two numbers\n";
	cin>>num1>>num2;
	if(num1>num2) gcd=num2;
	else gcd=num1;
	for(int i=gcd;i>0;i--)
	{
		if((num1%i==0) && (num2%i==0))
		{
			gcd=i;
			break;
		} 
	}
	cout<<"GCD: "<<gcd<<endl;
	return 0;
}
