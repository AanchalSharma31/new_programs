//9:write the program for prime or not
#include<iostream>
using namespace std;
int main()
{
	int num,flag=0;
	cout<<"Enter the number\n";
	cin>>num;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1) cout<<"prime number\n";
	else cout<<"not prime number\n";
	return 0;
}
