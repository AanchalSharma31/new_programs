//40: amstrong number........371=3*3*3+7*7*7+1*1*1
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,n=0,rem,sum=0;
	cout<<"Enter the number: ";
	cin>>num;
	int temp=num;
	while(temp!=0){
		temp=temp/10;
		n++;
	}
	temp=num;
	while(num!=0)
	{
		rem=num%10;
		sum=sum+pow(rem,n);
		num=num/10;
	}
	if(temp==sum) cout<<"Amstrong number\n";
	else cout<<"Not a amstrong number\n";
	return 0;
}
