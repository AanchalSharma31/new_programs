//18: linear search using recursion
#include<iostream>
using namespace std;
int main()
{
	int n,item,pos=0,i=0;
	int search(int, int ,int ,int[]);
	cout<<"Enter the size of array\n";
	cin>>n;
	int arr[n];
	cout<<"Elements of array\n";
	for(int i=0;i<n;i++) cin>>arr[i];
	cout<<"Enter item to search\n";
	cin>>item;
	pos=search(n,item,i,arr);
	if(pos==0) cout<<"Item not found";
	else cout<<"Item found at position "<<pos<<"\n";
	return 0;
}
search(int y,int m,int j, int a[])
{
	if(m==a[j]) return j+1;
	else {
		if (j<y)
	return search(y,m,j+1,a);
	else return 0;}
}

