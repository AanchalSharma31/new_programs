//90: perfect number...........6=1+2+3(sum of divisor)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,sum=1;
	cout<<"Enter the number: ";
	cin>>num;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)	sum=sum+i;	
	}
	if(num==sum) cout<<"Perfect number\n";
	else cout<<"Not perfect number\n";
	return 0;
}
