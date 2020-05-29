//27: find maximum and minimum in 2d array
#include<iostream>
using namespace std;
int main()
{
	int n,m,max,min;
	cout<<"Enter row and column respectivily\n";
	cin>>n>>m;
	int arr[n][m];
	cout<<"Enter the elements of matrix\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++) cin>>arr[i][j];
	}
	max=arr[0][0];
	min=arr[0][0];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(max<arr[i][j]) max=arr[i][j];
			if(min>arr[i][j]) min=arr[i][j];	
		}
	}
	cout<<"Maximum: "<<max<<"\n"<<"Minimum: "<<min<<"\n";
	return 0;
}
