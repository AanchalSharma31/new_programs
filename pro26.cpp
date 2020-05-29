//26: find greatest and smallest in an array
#include<iostream>
using namespace std;
int main()
{
	int n,max,min;
	cout<<"Enter the size of array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array\n";
	for(int i=0;i<n;i++) cin>>arr[i];
	max=arr[0];
	min=arr[0];
	for(int i=1;i<n;i++)
	{
		if(max<arr[i]) max=arr[i];
		if(min>arr[i]) min=arr[i]; 	
	} 
	cout<<"Maximum: "<<max<<"\n"<<"Minimum: "<<min<<"\n";
	return 0;
}
