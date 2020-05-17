//11:interchange to values using call by reference
#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	void swap(int* ,int*);
	cout<<"Enter two numbers\n"<<"Number 1: \n";
	cin>>num1;
	cout<<"Number 2: \n";
	cin>>num2;
	swap(&num1 ,&num2);
	cout<<"Swapped numbers\n"<<"number 1: "<<num1<<endl<<"number 2: "<<num2<<endl;
	return 0;
}
swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;  
	*b=temp;
		
}
