//33: function has argument as array and return maximum value
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int maximum(int [], int);
	cout<<"Enter the size of array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array\n";
	for(int i=0;i<n;i++) cin>>arr[i];
	int value=maximum(arr,n);
	cout<<"Maximum value: "<<value;
	return 0;
}
int maximum(int a[],int n)
{
	int max=a[0];
	for(int i=1;i<n;i++)
	{
		if(max<a[i]) max=a[i];
	}
	return max;
}
