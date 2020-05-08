//5: factorial of number
#include<iostream>
using namespace std;
int main()
{
	int num,fact=1;
	cout<<"Enter the number\n";
	cin>>num;
	for(int i=2;i<=num;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial: "<<fact<<endl;
	return 0;
}
