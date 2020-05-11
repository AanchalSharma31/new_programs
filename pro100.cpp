//100:program to convert decimal to octal number
#include<iostream>
using namespace std;
int main()
{
	int temp1=0,num,rem,temp=0;
	cout<<"enter the number(decimal)\n";
	cin>>num;
	while(num>0)
	{
		rem=num%8; 
		temp=temp*10+rem; 
		num=num/8;
	}
	while(temp>0)
	{
		rem=temp%10;
		temp1=temp1*10+rem;
		temp=temp/10;
	}
 	cout<<"number in octal: "<<temp1<<endl; 
}
