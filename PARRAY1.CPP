#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int average=0;
const int size=5;
float marks [size];
	for(int i=0;i<size;i++)
	{
	cout<<"enter marks of student"<<i+1<<"\t";
	cin>>marks[i];
	if(marks[i]>=33)
	{ cout<<" Pass"<<"\n";}
	else
	if(marks[i]<=33)
	{ cout<<" Fail"<<"\n";}
	}
	cout<<"\n";
	for(i=0;i<size;i++)
	cout<<"marks ["<<i+1<<"]="<<marks[i]<<"\n";
getch();
return 0;
}
