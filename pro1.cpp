//write the reverse of any string
#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"Enter the string\n";
	cin>>str;
	int n=str.length();
	for(int i=n-1;i>=0;i--)
	{
		cout<<str[i];
	}
	return 0;
}
