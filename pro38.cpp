//38: wap to find nCr
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,n1=1,r1=1,diff1=1;
	cout<<"To find nCr :\n"<<"Enter the value of n: \n";
	cin>>n;
	cout<<"Enter the value of r: \n";
	cin>>r;
	int diff=n-r;
	while(n!=0)
	{
		n1=n1*n;
		n--;
	}
	while(r!=0)
	{
		r1=r1*r;
		r--;
	}
	while(diff!=0)
	{
		diff1=diff1*diff;
		diff--;
	}
	float nCr =(float)n1/(float)(r1*diff1);
	cout<<"Value of nCr: "<<nCr<<endl;
	
	
	
	return 0;
}
