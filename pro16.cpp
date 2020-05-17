//16:swap two values without using thid variable
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter two numbers.\n"<<"Number 1: ";
	cin>>num1;
	cout<<"Number 2: ";
	cin>>num2;
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	cout<<"Swapped numbers.\n"<<"Number 1: "<<num1<<"\n"<<"Number 2: "<<num2;
	return 0;
}
