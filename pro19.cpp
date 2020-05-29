//19: linear search without using recursion
#include<iostream>
using namespace std;
int main()
{
	int n,item;
	cout<<"Enter the size of array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the element of array\n";
	for(int i=0;i<n;i++) cin>>arr[i];
	cout<<"Enter the element to search\n";
	cin>>item;
	int i;
	for( i=0;i<n;i++)
	{
		if(arr[i]==item)
		{
			cout<<"Item found at position "<<i+1<<"\n";
			break;
		}
	}
	if(i==n) cout<<"Item not found\n";
	return 0;
}
