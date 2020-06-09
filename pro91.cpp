//91: solve quadratic equation
//a(x)2+bx+c=0......x=-b+-((b)2-4ac)0.5/2a
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,D,x;
	cout<<"Enter the values a(x)2+bx+c\n"<<"a: ";
	cin>>a;
	cout<<"b: ";
	cin>>b;
	cout<<"c: ";
	cin>>c;
	if((b*b)>=(4*a*c))
	{
		D=b*b-4*a*c;
		if(D==0) 
		{
			x=-b/2*a;
			cout<<"Equal solutions: "<<x<<"\n";	
		}
		else
		{
			D=sqrt(D);
			x=(-b+D)/2*a;
			cout<<"Solutions: "<<x<<" ";
			x=(-b-D)/2*a;
			cout<<x<<"\n";
		}
		
	}
	else cout<<"No solution";
	return 0;
}
