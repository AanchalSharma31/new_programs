//7:write program for for fibonacci series using recursion
#include<iostream>
using namespace std;
int main()
{
	int fibo(int);
	int num,i=0;
	cout<<"Enter the number\n";
	cin>>num;
	while(i<num)
	{
		cout<<fibo(i)<<" ";
		i++;	
	}
	
	return 0;
}
int fibo(int n)
{
	if(n==0||n==1) return n;
	else
	{
		if(n>0) return (fibo(n-1)+fibo(n-2));
	} 
}

