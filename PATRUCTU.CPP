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
{
int empno;
char name[26];
char desig[26];
addr address;
float basic;
}worker;
emp sales_emp[10];
void display(int a);
void enter(void);
int main()
{
clrscr();
int epno,i;
char ch;
enter();
do
{
	cout<<"\n"<<"enter employe no whose information"
	<<"is to be displayed"<<"\n";
	cin>>epno;
	int flag=0;
	for(i=0;i<10;i++)
	{
	if(sales_emp[i].empno==epno)
	{
	display(i);
	flag=1;
	break;
	}
	}
	if(!flag)
	{
	cout<<"\n"<<"sorry !no employ exists:"<<"\n";
	}
	cout<<"\n"<<"display mare ?(y/n).."<<"\n";
	cin>>ch;
	}
	while(ch=='y')
getch();
return 0;
}
void enter(void)
{
for(int i=0;i<10;i++)
{
	cout<<"\n"<<"employ no:";
	cin>>sales_emp[i].empno;
	cout<<"\n"<<"employee name";
	gets(sales_emp[i].name);
	cout<<"\n"<<"designation";
	gets(sales_emp[i].desig);
	cout<<"\n"<<"address";
	cout<<"houseno";
	cin>>sales_emp[i].address.houseno;
	cout<<"\n area";
	gets(sales_emp[i].address.area);
	cout<<"\n city";
	gets(sales_emp[i].address.city);
	cout<<"\n state";
	gets(sales_emp[i].address.state);
	cout<<"\n"<<"baasic pay";
	cin>>sales_emp[i].basic;
}
return;
}
void display(int a)
{
	cout<<"employee data"<<"\n";
	cout<<"\n"<<"employee no"<<sales_emp[a].empno;
	cout<<"\n"<<"name";
	cout.write(sales_emp[a].name,26);
	cout<<"\n"<<"designation";
	cout.write(sales_emp[a].desig,26);
	cout<<"\n"<<"address"<<sales_emp[a].address.houseno;
	cout.write(sales_emp[a].address.area,26);
	cout.write(sales_emp[a].address.city,26);
	cout.write(sales_emp[a].address.state,26);
	cout<<"\n"<<"basic pay"<<sales_emp[a].basic;
	cout<<"\n";
return;
}
