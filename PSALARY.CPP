#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
const int size=3;
float sales[size];
int average1=0,average2=0,total1=0,total2=0;
{
	for (int i=0;i<size;i++)
	{
	cout<<"enter sales of shop '1'  "<<i+1<<";";
	cin>>sales[i];
	total1=total1+sales[i];
	}
	average1=total1/size;
	cout<<"total sales ="<<total1<<endl;
	cout<<"average sales="<<average1<<endl;
}
cout<<endl;
{
	for (int j=0;j<size;j++)
	{
	cout<<"enter sales of shop '2'  "<<j+1<<";";
	cin>>sales[j];
	total2=total2+sales[j];
	}
	average2=total2/size;
	cout<<"total sales ="<<total2<<endl;
	cout<<"average sales="<<average2<<endl;
}
clrscr();
if(total1>=total2)
{ cout<<"shop 1 has higher profit "<<"\n";}
if(total1<=total2)
{ cout<<"shop 2 has higher profit "<<"\n";}

getch();
return 0;
}





