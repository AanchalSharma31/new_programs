//10:interchange to values using call by value 
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	void swap(int,int);
	cout<<"Enter two numbers\n"<<"number 1: ";
	cin>>num1;
	cout<<"number 2: ";
	cin>>num2;
	swap(num1,num2);
	return 0;
}
swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"Swapped numbers\n"<<"number 1: "<<a<<endl<<"number 2: "<<b<<endl;
}
