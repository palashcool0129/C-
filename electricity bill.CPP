#include<iostream.h>
#include<conio.h>
void main ()
{
long int phone,a,b,c,d;
char name[20];
char address[30];
 clrscr ();
	cout<<"Electricity Bill -> M_P_ INDIA       \n";
	cout<<"Name of Person  		\n";
	cin>>name;

	cout<<"address of person  	\n";
	cin>>address;

	cout<<"phone number		\n";
	cin>>phone;

	cout<<"previous reading  	\n";
	cin>>a;

	cout<<"current reading		\n";
	cin>>b;

	c=b-a;
	cout<<c<<"\n";

	if (c<100)
	d=c*1;
	if((c>=200)&&(c<200))
	d=c*2;
	if(c>200)
	d=c*3;
	cout<<d;

 getch ();
}