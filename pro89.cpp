//89: strong number.........145=1+24+120
#include<bits/stdc++.h>
using namespace std;
int fact(int);
int main()
{
	int num,rem,sum=0;
	
	cout<<"Enter the number: ";
	cin>>num;
	int temp=num;
	while(num!=0)
	{
		rem=num%10;
		rem=fact(rem);
		sum=sum+rem;
		num=num/10;
	}
	if(temp==sum) cout<<"Strong number\n";
	else cout<<"Not a strong number\n";
	return 0;
}
int fact(int r)
{
	int temp=1;
	for(int i=2;i<=r;i++)
		temp=temp*i;
	return temp;
}

