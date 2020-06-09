// 21: binary search without recursion
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=0;
	cout<<"Enter the size of array\n";
	cin>>n;
	int arr[n];
	int first=0,last=n-1;
	cout<<"Enter the elements of array in sorted order\n";
	for(int i=0;i<n;i++) cin>>arr[i];
	int item;
	cout<<"Enter the element to search\n";
	cin>>item;
 	int mid;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(arr[mid]==item)
		{
			flag=1;
			break;
		}
		else
		{
			if(arr[mid]>item) last=mid;
			else first=mid+1;
			
		}  
	}
	if(flag==1) cout<<"Element found at postion :"<<mid+1;
	else cout<<"Element not found";
	return 0;
}
