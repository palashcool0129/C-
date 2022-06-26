#include<iostream.h>
#include<conio.h>
main()
{
clrscr();
float sum(int,int);
float a=10,b=20;
	cout<<"value of a is "<<a<<"\n";
	cout<<"value of b is "<<b<<"\n";
	//cout<<sum(a,b);
	cout<<"\nthe change value of a and b is"<<sum(a,b);
getch();
return 0;
}
float sum(int p, int q)
{p=30; q=40;
cout<<"p = "<<p<<"\n"<<"q = "<<q<<"\n";
return p+q;
}

