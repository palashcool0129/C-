#include<iostream.h>
#include<conio.h>
long int add(int);
long int subract(int,int);
long int multiply(int,int,int);
long int divide(int,int,int,int);
long int percent(int,int,int,int,int);
int main()
{
clrscr ();
int ft,sd;
	cout<<"ADDITION		\n";
	cout<<"enter first no	\n";
	cin>>ft;
	cout<<"enter second no	\n";
	cin>>sd;
	cout<<"Addition of numbers"<<"is"<<ft+sd<<"\n";
	cout<<"subraction of numbers"<<"is"<<ft-sd<<"\n";
	cout<<"multiplication of numbers"<<"is"<<ft*sd<<"\n";
	cout<<"division of numbers"<<"is"<<ft/sd<<"\n";
	cout<<"percentage of numbers"<<"is"<<ft+sd/100<<"\n";
return 0;
}



