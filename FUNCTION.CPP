#include<iostream.h>
#include<conio.h>
//int   sqarea(int);
//int   tgarea(int,int);
//int   rearea(int,int,int);
main()
{
int   sqarea(int);
int   tgarea(int,int);
int   rearea(int,int,int);
clrscr();
int  choice,ch1,base,height,area,radius,side,length,breadth;
	 cout<<"find area of polygon "<<"\n";
	 cout<<"1_ area of square"<<"\n";
	 cout<<"2_ area of triangle"<<"\n";
	 cout<<"3_ area of rectangle"<<"\n";
	 cout<<"enter you choice (1-3) :";
	 cin>>choice;
switch(choice)
{
case 1:
	cout<<"area of square	\n";
	cout<<"enter side of square	\n";
	int side=10;
	cout<<"given side ="<<side<<"\n";
	area=side*side;
	cout<<"area of square"<<area<<"\n";
	cout<<"area of square = "<<sqarea(side)<<"\n";

break;
case 2:	 cout<<"Area of triangle	       \n";
	 int base=14,hg=20;
	 cout<<"Enter base      \n";
	 //cin>>base;
	 cout<<"Enter height	\n";
	 //cin>>height;
	 cout<<"given base ="<<base<<"\n";
	 cout<<"given height ="<<hg<<"\n";
	 area=0.5*base*height;
	 cout<<"area of triangle"<<area<<"\n";
	 cout<<"area of triangle = "<<tgarea(base,height)<<"\n";

break;
case 3:	 cout<<"area of rectangle	\n";
	 int length=4, breadth=10, height=12;
	 cout<<"enter length	\n";
	 //cin>>length;
	 cout<<"enter breadth	\n";
	 //cin>>breadth;
	 cout<<"enter height	\n";
	 //cin>>height;
	 cout<<"given length ="<<length<<"\n";
	 cout<<"given breadth ="<<breadth<<"\n";
	 cout<<"given height ="<<height<<"\n";
	 area=length*breadth*height;
	 cout<<"area of rectangle"<<area<<"\n";
	 cout<<"area of rectangle = "<<rearea(length,breadth,height)<<"\n";
break;
default: cout<<"error"<<"\n";
	cout<<"enter the defined value";
break;
}
getch();
return 0;
}
int sqarea(int a)
{a=9;
return a;
}
int tgarea(int a,int b)
{a=5,b=10;
return  0.5*a*b;
}
int rearea(int a,int b,int c)
{a=14,b=16,c=18;
return a*b*c;
}
