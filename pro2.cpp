//2:write the  programe to check given string is palindrome or not
#include<iostream>
using namespace std;
int main()
{
	string str;
	int flag=0;
	cout<<"Enter the string\n";
	cin>>str;
	int n=str.length();
		for(int i=0,j=n-1;i<=n/2-1;i++)
		{
			if(!(str[i]==str[j]))
			{
				flag=1;
				break;
			}
			j--;
		}
	if(flag==1) cout<<"not palindrome\n";
	else cout<<"palindrome\n";
	return 0;
}

