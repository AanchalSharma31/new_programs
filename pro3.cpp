//3:write the programe to reverse the given number
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num,rem;
	cout<<"Enter the number\n";
	cin>>num;
	int temp=0;
	while(num!=0)
	{
	rem=num%10;
	temp=temp*10+rem;
	num=num/10;	 
	}
	cout<<"Reverse: "<<temp<<endl;
	return 0;
}
