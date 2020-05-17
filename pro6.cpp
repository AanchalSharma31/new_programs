 //6:write program for factorial using recursion
#include<iostream>
using namespace std;
int main()
{
	int factFunc(int);
	int num;
	cout<<"Enter the number\n";
	cin>>num;
	int factorial=0;  
	factorial=factFunc(num);
	cout<<"Factorial: "<<factorial<<endl;
} 
factFunc(int n)   
{
	if(n==1||n==0)	return 1;
	else 	return n*factFunc(n-1);
}

