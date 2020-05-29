//30: grade of student
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter the marks\n";
	cin>>marks;
	if(marks>=60) cout<<"FIRST\n";
	else
	{
		if((marks>=50) && (marks<60)) cout<<"SECOND\n";
		else
		{
			if((marks>=40) && (marks<50)) cout<<"THIRD\n";
			else cout<<"FAILED\n";
		
		}
	}
	return 0;
}
