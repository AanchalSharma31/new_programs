//13:print pyramid of number
#include<iostream>
using namespace std;
int main()
{
	int num,temp;
	cout<<"Enter the size of pyramid\n";
	cin>>num;
	temp=num;
	for(int k=1;k<=num;k++)
	{
		for(int i=temp;i>0;i--) cout<<" ";
		for(int j=1;j<=k;j++) {
			if(j<k) cout<<"* ";
			else cout<<"*";
		}
		cout<<"\n";
		temp--;
	}
	return 0;
}
