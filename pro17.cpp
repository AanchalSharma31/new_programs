//find year is leap year or not
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the year\n";
	cin>>year;
	if( (year%400==0) || ((year%4==0) && (year%100!=0)) ) cout<<"Leap year\n";
	else cout<<"Not leap year\n";
	return 0;
}
