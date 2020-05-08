//4: fibonacci series
#include<iostream>
using namespace std;
int main()
{
	int n,first=0,second=1,next=1;
	cout<<"Enter the number\n";
	cin>>n;
	cout<<"Fibonacci series\n: ";
	cout<<first<<" "<<second<<" ";
	for(int i=0;i<n;i++)
	{
		next=first+second;
		first=second;
		second=next;
		cout<<next<<" ";
	}
	cout<<endl;
	return 0;
}
