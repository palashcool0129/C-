#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct Distance
{int feet;
int inches;
};
int main()
{Distance length1,length2;
void prnsum(Distancel1,Distancel2);
	cout<<"enter length 1"<<"\n";
	cout<<"feet";
	cin>>length1.feet;
	cout<<"enter inches 1"<<"\n";
	cin>>length1.inches;
	cout<<"\n \n"<<"enter length 2"<<"\n";
	cin>>length2.feet;
	cout<<"\n"<<"enter inches"<<"\n";
	cin>>length2.inches;
	prnsum(length1,length2);
getch();
return 0;
void prnsum(distance l1,distance l2)
      {
      distance l3;
      l3.feet=l1.feet+l2.feet+l1.inches+l2.inches)/12;
      l3.inches=(l1.inches+l2.inches)%12;
      cout<<"\n total feet"<<l3.feet<<"\n";
      cout<<"\n total inches"<<l3.inches;
      return;
      }



