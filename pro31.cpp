//31: sum of individual digit of positive integer
#include<iostream>
using namespace std;
int main()
{
	int num,rem,sum=0;
	cout<<"Enter the number\n";
	cin>>num;
	while(num!=0)
	{
		 rem=num%10;
		 sum=sum+rem;
		 num=num/10;
	}
	cout<<"Sum of digits: "<<sum<<"\n";
	return 0;
}
