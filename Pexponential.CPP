#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{
clrscr();
const double e=1;
double result,y;
	 cout<<"enter value of y	\n";
	 cin>>y;
	 result=(2-y)*exp(2*y)+pow(4,y);
	 cout<<"the result of given expression is ";
	 cout<<result<<"\n";
getch();
return 0;
}