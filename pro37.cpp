//37: wap for the sum 1+1/2+1/3+.....
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	float sum=1.0;
	cout<<"Enter the value of limit \n";
	cin>>num;
	for(int i=2;i<=num;i++)
	{
	  sum=sum+1/float(i);
	  cout<<sum<<endl;
	  }
	cout<<"Sum: "<<sum;
	return 0;
 } 
