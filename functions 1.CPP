#include<iostream.h>
#include<conio.h>
int   sqarea(int);
int   tgarea(int,int);
int   rearea(int,int,int);
main()
{
clrscr();
int  choice,ch1,base,height,area,radius,side,length,breadth;
	 cout<<"find area of polygon "<<"\n";
	 cout<<"1_ area of square"<<"\n";
	 cout<<"2_ area of triangle"<<"\n";
	 cout<<"3_ area of rectangle"<<"\n";
	 cout<<"enter you choice (1-3) :";
	 cin>>choice;
{do
switch(choice)
{
case 1:
	cout<<"area of square	\n";
	cout<<"enter side of square	\n";
	cin>>side;
	cout<<"area of square = "<<sqarea(side)<<"\n";
break;
case 2:	 cout<<"Area of triangle	       \n";
	 cout<<"Enter base      \n";
	 cin>>base;
	 cout<<"Enter height	\n";
	 cin>>height;
	 cout<<"area of triangle = "<<tgarea(base,height)<<"\n";
break;
case 3:	 cout<<"area of rectangle	\n";
	 cout<<"enter length	\n";
	 cin>>length;
	 cout<<"enter breadth	\n";
	 cin>>breadth;
	 cout<<"enter height	\n";
	 cin>>height;
	 cout<<"area of rectangle = "<<rearea(length,breadth,height)<<"\n";
break;
default: cout<<"error"<<"\n";
	cout<<"enter the defined value";
break;
}
	cout<<"\n want more choice (y/n)?";
	cin>>ch1;
	if(ch1=='y')
	cout<<"again enter choice (1-3):";
}
while(ch1='y');
getch();
return 0;
}
int sqarea(int a)
{ return a*a;
}

int tgarea(int a,int b)
{ return  0.5*a*b;
}

int rearea(int a,int b,int c)
{return a*b*c;
}

















