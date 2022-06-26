#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct Distance
{
int feet;
int inches;
};
int main()
{
clrscr();
Distance length1,length2;
void prnsum(Distance&l1,Distance&l2);
	cout<<"enter length 1"<<"\n";
	cout<<"feet";
	cin>>length1.feet;
	cout<<"\n"<<"inches";
	cin>>length1.inches;
	cout<<"\n"<<"enter length 2"<<"\n";
	cout<<"feet";
	cin>>length2.feet;
	cout<<"\n"<<"inches";
	cin>>length2.feet;
	prnsum(length1,length2);
getch();
return 0;
}
void prnsum(Distance&l1,Distance&l2)
{
Distancel3;
	l3.feet=l1.feet+l2.feet+(l1.inches+l2.inches)/12;
	l3.inches=(l1.feet+l2.inches)%12;
	cout<<"\n total feet"<<l3.feet<<"\n";
	cout<<"totsl inches"<<l3.inches;
	return;
	}
