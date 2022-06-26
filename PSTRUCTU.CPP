#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct addr
{
  int houseno;
  char area[26];
  char city[26];
  char state[26];
};
struct emp
{ int empno;
  char name[26];
  char desig[26];
  addr address;
  float basic;
} worker;
int main()
{
clrscr();
int employ_no;
	cout<<"how many employ work \n";
	cin>>employ_no;
	for(int i=0;i<=employ_no;i++)
	{
	cout<<"\n"<<"enter employee no :"<<i+1<<"\n";
	//cin>>worker.empno;
	cout<<"\n"<<"name :";
	gets(worker.name);
	cout<<"\n"<<"designation :"<<"\n";
	gets(worker.desig);
	cout<<"\n"<<"enter address :"<<"\n";
	cout<<"\n"<<"houseno :";
	cin>>worker.address.houseno;
	cout<<"\n"<<"area :";
	gets(worker.address.area);
	cout<<"\n"<<"city :";
	gets(worker.address.city);
	cout<<"\n"<<"state :";
	gets(worker.address.state);
	cout<<"\n"<<"basic pay :";
	cin>>worker.basic;
	}
getch();
return 0;
}


