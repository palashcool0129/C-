#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
void swap(int,int);
int a,b;
a=10;b=5;
	cout<<"original values are"<<"\n";
	cout<<"a= "<<a<<" b="<<b<<"\n";
	swap(a,b);
	cout<<"value after swap"<<"\n";
	cout<<"a= "<<a<<" b="<<b<<"\n";
	getch();
	return 0;
}
void swap(int x,int y)
{
int temp;
temp=x;
y=temp;
	cout<<"swapped values are"<<"\n";
	cout<<"a= "<<x<<" b="<<y<<"\n";
	}
