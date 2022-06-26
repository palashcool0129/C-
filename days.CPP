#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int totdays,years,weeks,days,num1;
	cout<<"Enter total no of Days	\n";
	cin>>totdays;
	years=totdays/365;
	num1=totdays%365;
	weeks=num1/7;
	days=num1%7;
	cout<<"\n";
	cout<<"years="<<years<<"\n";
	cout<<"weeks="<<weeks<<"\n";
	cout<<"days="<<days<<"\n";
getch();
}

