#include<iostream.h>
#include<conio.h>
void  main()
{
clrscr();
long int  choice,side,length;
long int  breadth,base,choice1;
long int  choice2,choice4,opt,num,c,radius,height,num1,i;
	cout<<"enter your choice (1-4)"<<"\n";
	cout<<"(1). area of different polygon"<<"\n";
	cout<<"(2). simple calculator"<<"\n";
	cout<<"(3). table of any number"<<"\n";
	cout<<"(4). Nothing "<<"\n";
	do
{	cin>>choice;
	if(choice=='1'||choice=='2'||choice=='3'||choice=='4')
	cout<<"enter your choice (1-4)"<<"\n";
	cout<<"(1). area of different polygon"<<"\n";
	cout<<"(2). simple calculator"<<"\n";
	cout<<"(3). table of any number"<<"\n";
	cout<<"(4). Nothing "<<"\n";
switch(choice)
{
case 1:
{
clrscr();
int choice1,choice5,side,radius,length,breadth,base,height;
	 cout<<"1. area of square"<<"\n";
	 cout<<"2. area of circle"<<"\n";
	 cout<<"3. area of rectangle"<<"\n";
	 cout<<"4. area of triangle"<<"\n";
	 cout<<"enter the choice (1-4)"<<"\n";
	 cin>>choice;


switch(choice)
{
case 1 :{
	 cout<<"1. area of square"<<"\n";
	 cout<<"enter side of square"<<"\n";
	 cin>>side;
	 cout<<"area of square =";//<sqarea(side);
}
break;
case 2:{
	 cout<<"2. area of circle"<<"\n";
	 cout<<"enter radius of circle"<<"\n";
	 cin>>radius;
	 cout<<"area of circle =";//crarea(radius);
}
break;
case 3:{
	 cout<<"3. area of rectangle"<<"\n";
	 cout<<"enter length "<<"\n";
	 cin>>length;
	 cout<<"enter breadth"<<"\n";
	 cin>>breadth;
	 cout<<"area of rectangle =";//rgarea(length,breadth);
}
break;
case 4:{
	 cout<<"4. area of triangle"<<"\n";
	 cout<<"enter base"<<"\n";
	 cin>>base;
	 cout<<"enter height"<<"\n";
	 cin>>height;
	 cout<<"area of rectangle ="<<"\n";//tgarea(base,height);
	}
break;
default:{
	 cout<<"wrong choice!!!!"<<"\n";
	 cout<<"please enter a valid choice"<<"\n";
	}
break;
}
default :cout<<"byy";
}
}
	cout<<"\n want to enter more choice (yes -'y'/ no -'n') ?";
	cin>>choice4;
}while(choice4=='y'||choice4=='Y');

}
getch();
//return 0;