//20:binary search using recursion
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,first,last,item;
	int binarySearch(int [], int ,int,int);
	cout<<"Enter the size of array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array in sorted order\n";
	for(int i=0;i<n;i++) cin>>arr[i];
	first=0,last=n-1;
	cout<<"Enter the element to search: ";
	cin>>item;
	int pos=binarySearch(arr,item,first,last);
	if(pos==0) cout<<"Element not found\n";
	else cout<<"Element found at position: "<<pos;
	return 0; 	
}
binarySearch(int arr[],int item,int first,int last)
{
	int mid;
	if(first<=last)
	{
		mid=(first+last)/2;
		if(arr[mid]==item) return mid+1;
		else {
			if(arr[mid]>item) return binarySearch(arr,item,first,mid-1);
			else return binarySearch(arr,item,mid+1,last);
		}
	}
	return 0;
}
