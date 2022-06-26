#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
int sales[2][12],g;
unsigned long total;
	for (int i=0;i<2;i++)
     {  total=0;
	cout<<"\n enter sales of salesman"<<i+1<<"\n";
	for (int j=0;j<12;j++)
     {  cout<<" month "<<j+1<<" ";
	cin>>sales[i][j];
	total=total+sales[i][j];
     }
     cout<<"\n";
     cout<<"total sales of salesman"<<j+1<<" = Rs."<<total<<"\n";
     }
getch();
return 0;
}
